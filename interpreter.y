%{
#include <exception>
#include <iostream>
#include <sstream>
#include <vector>
#include <cstdio>
#include <string>
#include "classes/BoolNode.h"
#include "classes/IntegerNode.h"
#include "classes/OperationNode.h"
#include "classes/FunctionNode.h"
#include "AuxFunctions.h"
#include "classes/Robot.h"

extern FILE* yyin;
extern std::unordered_map<std::string, bool> Interpreter::isConst;
extern std::unordered_map<std::string, Interpreter::Node*> Interpreter::varStorage;

int yylex(void);
void yyerror(const char*);

%}

%locations

%union
{
    Interpreter::BoolNode* boolPtr;
    Interpreter::IntegerNode* intPtr;
    Interpreter::Node* ptr;
    std::string* varName;
    Interpreter::VariableOperationNode* varOpPtr;
    Interpreter::varType vtype;
};

%nonassoc END
%token <boolPtr> BOOL
%token <intPtr> INTEGER
%token <varName> VARIABLE VVARIABLE MVARIABLE VAR FVARIABLE
%token <vtype> CINT VINT MINT INT CVINT CMINT BOOLEAN CBOOLEAN VBOOLEAN MBOOLEAN CVBOOLEAN CMBOOLEAN
%token NEWLINE PRINT CONJUNCTION ELEMMULT '\'' LEFTSHIFT RIGHTSHIFT ',' IF FORR ER DOUBLEDOT B E FUNC MOVE RIGHT LEFT ROBEX WALL BEGFOR BEGIF ENDIF ENDFOR DFLT

%left ASSIGN DECLARE
%left '<' '>' 
%left '+' '-'
%left '*' '/'
%right '!'
%nonassoc UMINUS

%type <ptr> expr const stmt stmts print exprs vector listexprs matrix vmdeclaration iff forr return_func args_func function function_head callfunc_args callfunction robotmove robotright robotleft robotwall robotexit robotactions
%type <varOpPtr> declaration assignment
%type <vtype> type

%destructor {delete $$;} <boolPtr>
%destructor {delete $$;} <intPtr>
%destructor {delete $$;} <ptr>
%destructor {delete $$;} <varName>
%destructor {delete $$;} <varOpPtr>

%%

program:
    func                    {outputOut(); exit(0);}
;

func:
    func stmts              {
                                    try {
                                        $2->execute();
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
    | func error                {
                                    std::cerr << "Error at line " << @2.first_line << std::endl;
                                }
    |                           
;

stmts:
    stmt                        {$$ = $1;}
    | stmts stmt                {
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back($1);
                                    kids.push_back($2);
                                    $$ = new Interpreter::OperationNode(newline, kids);
                                }
    | stmts error               {
                                    std::cerr << "Error at line " << @2.first_line << std::endl;
                                    delete $1; delete $$;
                                }
    | error                     {
                                    std::cerr << "Error at line " << @1.first_line << std::endl;
                                    delete $$;
                                }
;

stmt:
    NEWLINE                     {
                                    std::vector<Interpreter::Node*> kids;
                                    $$ = new Interpreter::OperationNode(newline, kids);
                                }
    | expr NEWLINE              {$$ = $1;}
    | vector NEWLINE            {$$ = $1;}
    | matrix NEWLINE            {$$ = $1;}
    | print NEWLINE             {$$ = $1;}
    | vmdeclaration NEWLINE     {$$ = $1;}
    | declaration NEWLINE       {$$ = $1;}
    | assignment NEWLINE        {$$ = $1;}
    | iff NEWLINE               {$$ = $1;}
    | forr NEWLINE              {$$ = $1;}
    | function NEWLINE          {$$ = $1;}
    | callfunction NEWLINE      {$$ = $1;}
    | robotactions NEWLINE      {$$ = $1;}
    | '(' stmts ')'             {$$ = $2;}
    | error NEWLINE             {
                                    std::cerr << "Error at line " << @1.first_line << std::endl;
                                    delete $$;
                                }
;

robotactions:
    robotright        {$$ = $1;}
    | robotleft         {$$ = $1;}
;

robotmove:
    MOVE '(' expr ')'           {   
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back($3);
                                    $$ = new Interpreter::OperationNode(move, kids);
                                }
;

robotright:
    RIGHT                       {
                                    std::vector<Interpreter::Node*> kids;
                                    $$ = new Interpreter::OperationNode(right, kids);
                                }
;

robotleft:
    LEFT                        {
                                    std::vector<Interpreter::Node*> kids;
                                    $$ = new Interpreter::OperationNode(left, kids);
                                }
;

robotwall:
    WALL                        {
                                    std::vector<Interpreter::Node*> kids;
                                    $$ = new Interpreter::OperationNode(wall, kids);
                                }
;

robotexit:
    ROBEX                       {
                                    std::vector<Interpreter::Node*> kids;
                                    $$ = new Interpreter::OperationNode(exxit, kids);
                                }
;

iff:
    IF expr NEWLINE begif stmts endif       {
                                                try {
                                                    std::vector<Interpreter::Node*> kids;
                                                    kids.push_back($2);
                                                    kids.push_back($5);
                                                    $$ = new Interpreter::OperationNode(iff, kids);
                                                }
                                                catch (const char* error) {
                                                    std::cerr << error << std::endl;
                                                }
                                            }
;

begif:
    B                           {}
    | BEGIF                      {}
;

endif:
    E                           {}
    | ENDIF                      {}
;

begfor:
    B                                       {}
    | BEGFOR                                {}
;

endfor:
    E                                       {}
    | ENDFOR                                {}
;

forr:
    FORR declaration DOUBLEDOT expr NEWLINE begfor stmts endfor {  try {
                                                                        std::vector<Interpreter::Node*> kids;
                                                                        kids.push_back($2);
                                                                        kids.push_back($4);
                                                                        kids.push_back($7);
                                                                        $$ = new Interpreter::OperationNode(forr, kids);
                                                                    }
                                                                    catch (const char* error) {
                                                                        std::cerr << error << std::endl;
                                                                    }
                                                                }
;

return_func:
    type VAR                                                    {
                                                                    $$ = new Interpreter::return_func({$1, *$2});
                                                                }
    | return_func ',' type VAR                                  {
                                                                    dynamic_cast<Interpreter::return_func*>($1)->rets.push_back({$3, *$4});
                                                                    $$ = $1;
                                                                }
    | return_func error                                         {
                                                                    std::cerr << "Error at line " << @2.first_line << std::endl;
                                                                    if (!$1) delete $1;
                                                                    if (!$$) delete $$;
                                                                }
;

args_func:
     '[' type VAR                                                       {$$ = new Interpreter::args_func($2, *$3);}
    | '[' type VAR DECLARE expr                                         {$$ = new Interpreter::args_func($2, *$3, $5);}
    | '[' type VAR DECLARE vector                                       {$$ = new Interpreter::args_func($2, *$3, $5);}
    | '[' type VAR DECLARE matrix                                       {$$ = new Interpreter::args_func($2, *$3, $5);}
    | args_func ',' type VAR                                            {
                                                                            if (dynamic_cast<Interpreter::args_func*>($$)->isClosed) yyerror("Invalid arguments initialization!");
                                                                            dynamic_cast<Interpreter::args_func*>($$)->addNonDefault($3, *$4);
                                                                        }
    | args_func ',' type VAR DECLARE expr                               {
                                                                            if (dynamic_cast<Interpreter::args_func*>($$)->isClosed) yyerror("Invalid arguments initialization!");
                                                                            dynamic_cast<Interpreter::args_func*>($$)->addDefault($3, *$4, $6);
                                                                        }
    | args_func ',' type VAR DECLARE vector                             {
                                                                            if (dynamic_cast<Interpreter::args_func*>($$)->isClosed) yyerror("Invalid arguments initialization!");
                                                                            dynamic_cast<Interpreter::args_func*>($$)->addDefault($3, *$4, $6);
                                                                        }
    | args_func ',' type VAR DECLARE matrix                             {
                                                                            if (dynamic_cast<Interpreter::args_func*>($$)->isClosed) yyerror("Invalid arguments initialization!");
                                                                            dynamic_cast<Interpreter::args_func*>($$)->addDefault($3, *$4, $6);
                                                                        }
    | args_func ']'                                                     {
                                                                            dynamic_cast<Interpreter::args_func*>($1)->isClosed = true;
                                                                            $$ = $1;
                                                                        }

    | args_func error                                                   {
                                                                            std::cerr << "Error at line " << @2.first_line << std::endl;
                                                                            delete $1; 
                                                                            if (!$$) delete $$;
                                                                        }
    | error                                                             {
                                                                            std::cerr << "Error at line " << @1.first_line << std::endl;
                                                                            if (!$$) delete $$;
                                                                            delete $$;
                                                                        }
;

function_head:
    '[' return_func ']' DECLARE FUNC VAR '(' args_func ')'              {
                                                                            auto plug = new Interpreter::func_descript(dynamic_cast<Interpreter::return_func*>($2)->rets,
                                                                                dynamic_cast<Interpreter::args_func*>($8)->args,
                                                                                dynamic_cast<Interpreter::args_func*>($8)->def_args, *$6);

                                                                            Interpreter::funcStorage.insert_or_assign(*$6, plug);
                                                                            Interpreter::tmpStorage = Interpreter::varStorage;
                                                                            Interpreter::tmpIsConst = Interpreter::isConst;
                                                                            Interpreter::varStorage = plug->localStorage;
                                                                            Interpreter::isConst = plug->localIsConst;
                                                                            $$ = plug;
                                                                        }
    | error                                                             {
                                                                            std::cerr << "Error at line " << @1.first_line << std::endl;
                                                                            delete $$;
                                                                        }
;

function:
    function_head B NEWLINE stmts E                                     {
                                                                            dynamic_cast<Interpreter::func_descript*>($1)->toExec = $4;
                                                                            Interpreter::varStorage = Interpreter::tmpStorage;
                                                                            Interpreter::isConst = Interpreter::tmpIsConst;
                                                                            $$ = $1;
                                                                        }
;

callfunc_args:
    expr                                {$$ = new Interpreter::callfunc_args(expR, $1);}
    | vector                            {$$ = new Interpreter::callfunc_args(vectoR, $1);}
    | matrix                            {$$ = new Interpreter::callfunc_args(matriX, $1);}
    | DFLT                              {$$ = new Interpreter::callfunc_args(defaulT, nullptr);}
    | callfunc_args ',' expr            {dynamic_cast<Interpreter::callfunc_args*>($1)->addArg(expR, $3); $$ = $1;}
    | callfunc_args ',' vector          {dynamic_cast<Interpreter::callfunc_args*>($1)->addArg(vectoR, $3); $$ = $1;}
    | callfunc_args ',' matrix          {dynamic_cast<Interpreter::callfunc_args*>($1)->addArg(matriX, $3); $$ = $1;}
    | callfunc_args ',' DFLT            {dynamic_cast<Interpreter::callfunc_args*>($1)->addArg(defaulT, nullptr); $$ = $1;}
    | callfunc_args error               {
                                            std::cerr << "Error at line " << @2.first_line << std::endl;
                                            delete $1;
                                            if (!$$) delete $$; 
                                        }
    | error                             {
                                            std::cerr << "Error at line " << @1.first_line << std::endl;
                                            if (!$$) delete $$;
                                        }
;

callfunction:
    return_func DECLARE FVARIABLE '[' callfunc_args ']'     {$$ = new Interpreter::callfunc(*$3, dynamic_cast<Interpreter::return_func*>($1)->rets, 
                                                                                                        dynamic_cast<Interpreter::callfunc_args*>($5)->args);}    
    | error '[' callfunc_args ']'                           {
                                                                std::cerr << "Error at line " << @1.first_line << std::endl;
                                                                delete $3;
                                                                if (!$$) delete $$;
                                                            }
;

matrix:
    '{' listexprs '}'           {$$ = $2;}
    | MVARIABLE '(' vector ',' '[' ']' ')'      {   try {
                                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                        kids.push_back((Interpreter::ContainerMatrixNode*)($3));
                                                        $$ = new Interpreter::ContainerMatrixNode(kids, mveccolumnindex, *$1);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                } 
    | MVARIABLE '(' '[' ']' ',' vector ')'      {
                                                    try {
                                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                        kids.push_back((Interpreter::ContainerMatrixNode*)($6));
                                                        $$ = new Interpreter::ContainerMatrixNode(kids, mvecrowindex, *$1);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
    | MVARIABLE '(' matrix ')'                  {
                                                    try {
                                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                        kids.push_back((Interpreter::ContainerMatrixNode*)($3));
                                                        $$ = new Interpreter::ContainerMatrixNode(kids, mmatindex, *$1);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
    | MVARIABLE                     {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            $$ = new Interpreter::ContainerMatrixNode(kids, getmat, *$1);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
    | matrix '*' matrix             {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($1));
                                            kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($3));
                                            $$ = new Interpreter::ContainerMatrixNode(kids, mmultiply);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
    | matrix ELEMMULT matrix        {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($1));
                                            kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($3));
                                            $$ = new Interpreter::ContainerMatrixNode(kids, melemmultiply);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
    | matrix '\''                   {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($1));
                                            $$ = new Interpreter::ContainerMatrixNode(kids, mtransposition);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
    | matrix RIGHTSHIFT             {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($1));
                                            $$ = new Interpreter::ContainerMatrixNode(kids, mcycshiftright);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
    | matrix LEFTSHIFT              {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>($1));
                                            $$ = new Interpreter::ContainerMatrixNode(kids, mcycshiftleft);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
    | vector '\''                   {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            kids.push_back((Interpreter::ContainerMatrixNode*)($1));
                                            $$ = new Interpreter::ContainerMatrixNode(kids, vtransposition);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
    | matrix ELEMMULT vector        {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>($1));
                                            kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($3));
                                            $$ = new Interpreter::ContainerMatrixNode(kids, MEMvec);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
    | matrix ELEMMULT expr          {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>($1));
                                            kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($3));
                                            $$ = new Interpreter::ContainerMatrixNode(kids, MEMexpr);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
    | error matrix                  {
                                        std::cerr << "Error at line " << @1.first_line << std::endl;
                                        if (!$2) delete $2;
                                        if (!$$) delete $$;
                                    }
    | error vector                  {
                                        std::cerr << "Error at line " << @1.first_line << std::endl;
                                        if (!$2) delete $2;
                                        if (!$$) delete $$;
                                    }
    | error expr                    {
                                        std::cerr << "Error at line " << @1.first_line << std::endl;
                                        if (!$2) delete $2;
                                        if (!$$) delete $$;
                                    }
;

listexprs:
    vector ',' vector                   {
                                            $$ = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::ContainerVectorNode*>($1));
                                            dynamic_cast<Interpreter::ContainerMatrixNode*>($$)->addData(dynamic_cast<Interpreter::ContainerVectorNode*>($3));
                                        }
    | listexprs ',' vector              {dynamic_cast<Interpreter::ContainerMatrixNode*>($$)->addData(dynamic_cast<Interpreter::ContainerVectorNode*>($3));}
    | listexprs error                   {
                                            std::cerr << "Error at line " << @2.first_line << std::endl;
                                            delete $1;
                                        }
;

vector:
    '{' exprs '}'                       {$$ = $2;}
    | VVARIABLE '(' vector ',' '[' ']' ')'      {
                                                    try {
                                                        std::vector<Interpreter::ContainerVectorNode*> kids;
                                                        kids.push_back(static_cast<Interpreter::ContainerVectorNode*>($3));
                                                        $$ = new Interpreter::ContainerVectorNode(kids, vvecindex, *$1);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
    | MVARIABLE '(' expr ',' '['']' ')'         {
                                                    try {
                                                        std::vector<Interpreter::ContainerVectorNode*> kids;
                                                        kids.push_back(static_cast<Interpreter::ContainerVectorNode*>($3));
                                                        $$ = new Interpreter::ContainerVectorNode(kids, mexprcolumnindex, *$1);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
    | MVARIABLE '(' '['']' ',' expr ')'         {
                                                    try {
                                                        std::vector<Interpreter::ContainerVectorNode*> kids;
                                                        kids.push_back((Interpreter::ContainerVectorNode*)($6));
                                                        $$ = new Interpreter::ContainerVectorNode(kids, mexprrowindex, *$1);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
    | VVARIABLE                         {
                                            try {
                                                std::vector<Interpreter::ContainerVectorNode*> kids;
                                                $$ = new Interpreter::ContainerVectorNode(kids, getvec, *$1);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | vector ELEMMULT vector            {   
                                            try {
                                                std::vector<Interpreter::ContainerVectorNode*> kids;
                                                kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>($1));
                                                kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>($3));
                                                $$ = new Interpreter::ContainerVectorNode(kids, velemmultiply);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | vector RIGHTSHIFT                 {
                                            try {
                                                std::vector<Interpreter::ContainerVectorNode*> kids;
                                                kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>($1));
                                                $$ = new Interpreter::ContainerVectorNode(kids, vcycshiftright);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | vector LEFTSHIFT                  {
                                            try {
                                                std::vector<Interpreter::ContainerVectorNode*> kids;
                                                kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>($1));
                                                $$ = new Interpreter::ContainerVectorNode(kids, vcycshiftleft);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | vector ELEMMULT expr              {
                                            try {
                                                std::vector<Interpreter::ContainerVectorNode*> kids;
                                                kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>($1));
                                                kids.push_back(static_cast<Interpreter::ContainerVectorNode*>($3));
                                                $$ = new Interpreter::ContainerVectorNode(kids, VEMexpr);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | error vector                      {
                                               std::cerr << "Error at line " << @1.first_line << std::endl;
                                               delete $2; delete $$;
                                            }
    | error expr                        {
                                               std::cerr << "Error at line " << @1.first_line << std::endl;
                                               delete $2; delete $$;
                                            }

;

exprs:
    expr ',' expr               {
                                    $$ = new Interpreter::ContainerVectorNode($1);
                                    dynamic_cast<Interpreter::ContainerVectorNode*>($$)->addData($3);
                                }
    | exprs ',' expr            {dynamic_cast<Interpreter::ContainerVectorNode*>($$)->addData($3);}
    | exprs error               {
                                    std::cerr << "Error at line " << @2.first_line << std::endl;
                                    delete $1;
                                }
;

vmdeclaration:
    VVARIABLE '(' expr ')' ASSIGN expr          {
                                                    try {
                                                        if (!Interpreter::isConst[*$1]) {
                                                            std::vector<Interpreter::Node*> kids;
                                                            kids.push_back($3);
                                                            kids.push_back($6);
                                                            $$ = new Interpreter::VecMatVariableOperationNode(vexpr, *$1, kids);
                                                        }
                                                        else {
                                                            std::string tmp = std::string("Variable ") + *$1 + " can not be changed!";
                                                            yyerror(tmp.c_str());
                                                        }
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                    
                                                }
    | VVARIABLE '(' vector ',' '[' ']' ')' ASSIGN vector    {
                                                                if (!Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($3);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(vvec, *$1, dynamic_cast<Interpreter::ContainerVectorNode*>($9), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' expr ',' expr ')' ASSIGN expr           {
                                                                if (!Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($3);
                                                                    kids.push_back($5);
                                                                    kids.push_back($8);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mexpr, *$1, kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' expr ',' '[' ']' ')' ASSIGN vector      {
                                                                if (!Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($3);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mexprcolumn, *$1, dynamic_cast<Interpreter::ContainerVectorNode*>($9), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' '[' ']' ',' expr ')' ASSIGN vector      {
                                                                if (!Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($6);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mexprrow, *$1, dynamic_cast<Interpreter::ContainerVectorNode*>($9), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' vector ',' '[' ']' ')' ASSIGN matrix    {
                                                                if (!Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($3);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mveccolumn, *$1, dynamic_cast<Interpreter::ContainerMatrixNode*>($9), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' '[' ']' ',' vector ')' ASSIGN matrix    {
                                                                if (!Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($6);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mvecrow, *$1, dynamic_cast<Interpreter::ContainerMatrixNode*>($9), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' matrix ')' ASSIGN matrix                {
                                                                if (!Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($3);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mmat, *$1, dynamic_cast<Interpreter::ContainerMatrixNode*>($6), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }    
;

declaration:
    type VAR DECLARE expr                  {        
                                                    if ($1 == Interpreter::INT || $1 == Interpreter::CINT) {
                                                        auto plug = new Interpreter::IntegerNode();
                                                        Interpreter::varStorage.insert_or_assign(*$2, plug);
                                                        if ($1 == Interpreter::CINT) Interpreter::isConst.insert_or_assign(*$2, true);
                                                        $$ = new Interpreter::VariableOperationNode($1, declare, *$2, $4);
                                                    }
                                                    else if ($1 == Interpreter::BOOL || $1 == Interpreter::CBOOL) {
                                                        auto plug = new Interpreter::BoolNode();
                                                        Interpreter::varStorage.insert_or_assign(*$2, plug);
                                                        if ($1 == Interpreter::CBOOL) Interpreter::isConst.insert_or_assign(*$2, true);
                                                        $$ = new Interpreter::VariableOperationNode($1, declare, *$2, $4);
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
    | type VAR DECLARE vector              {
                                                    if ($1 == Interpreter::VINT || $1 == Interpreter::CVINT || $1 == Interpreter::VBOOL || $1 == Interpreter::CVBOOL) {
                                                        auto plug = new Interpreter::AbstractVectorNode();
                                                        Interpreter::varStorage.insert_or_assign(*$2, plug);
                                                        if ($1 == Interpreter::CVBOOL || $1 == Interpreter::CVINT) Interpreter::isConst.insert_or_assign(*$2, true);
                                                        $$ = new Interpreter::VariableOperationNode($1, declare, *$2, dynamic_cast<Interpreter::ContainerVectorNode*>($4));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
    | type VAR DECLARE matrix              {
                                                    if ($1 == Interpreter::MINT || $1 == Interpreter::CMINT || $1 == Interpreter::MBOOL || $1 == Interpreter::CMBOOL) {
                                                        auto plug = new Interpreter::AbstractMatrixNode();
                                                        Interpreter::varStorage.insert_or_assign(*$2, plug);
                                                        if ($1 == Interpreter::CMBOOL || $1 == Interpreter::CMINT) Interpreter::isConst.insert_or_assign(*$2, true);
                                                        $$ = new Interpreter::VariableOperationNode($1, declare, *$2, dynamic_cast<Interpreter::ContainerMatrixNode*>($4));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
;

assignment:
    VARIABLE ASSIGN expr                    {
                                                if (!Interpreter::isConst[*$1]) $$ = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *$1, $3);
                                                else {
                                                    std::string tmp = std::string("Variable ") + *$1 + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
    | VVARIABLE ASSIGN vector               {
                                                if (!Interpreter::isConst[*$1]) {
                                                    $$ = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *$1, dynamic_cast<Interpreter::ContainerVectorNode*>($3));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *$1 + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
    | MVARIABLE ASSIGN matrix               {
                                                if (!Interpreter::isConst[*$1]) {
                                                    $$ = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *$1, dynamic_cast<Interpreter::ContainerMatrixNode*>($3));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *$1 + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
;

print:
    PRINT '(' expr ')'          {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back($3);
                                    $$ = new Interpreter::OperationNode(pprint, kids); 
                                }
    | PRINT '(' VVARIABLE ')'   {
                                    $$ = new Interpreter::OperationNode(pprint, *$3); 
                                }
    | PRINT '(' MVARIABLE ')'   {
                                    $$ = new Interpreter::OperationNode(pprint, *$3);  
                                }
;

expr:
    const                       {$$ = $1;}
    | robotexit                 {$$ = $1;}
    | robotmove                 {$$ = $1;}
    | robotwall                 {$$ = $1;}
    | VARIABLE                  {
                                    $$ = new Interpreter::OperationNode(gscalar, *$1);
                                }

    | '-' expr %prec UMINUS     {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back($2);
                                    $$ = new Interpreter::OperationNode(uminus, kids);
                                }
    | expr '+' expr             {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back($1); 
                                    kids.push_back($3);
                                    $$ = new Interpreter::OperationNode(plus, kids);
                                }
    | expr '-' expr             {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back($1); 
                                    kids.push_back($3);
                                    $$ = new Interpreter::OperationNode(minus, kids);
                                }
    | expr '/' expr             {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back($1); 
                                    kids.push_back($3);
                                    $$ = new Interpreter::OperationNode(divide, kids);
                                }
    | expr '<' expr              {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back($1); 
                                    kids.push_back($3);
                                    $$ = new Interpreter::OperationNode(less, kids);
                                }
    | expr '>' expr             {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back($1); 
                                    kids.push_back($3);
                                    $$ = new Interpreter::OperationNode(greater, kids);
                                }
    | '!' expr                  {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back($2);
                                    $$ = new Interpreter::OperationNode(denial, kids); 
                                }
    | expr CONJUNCTION expr     {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back($1);
                                    kids.push_back($3);
                                    $$ = new Interpreter::OperationNode(conjunction, kids);
                                }
    | '(' expr ')'              {$$ = $2;}
    | VVARIABLE '(' expr ')'    {
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back($3);
                                    $$ = new Interpreter::OperationNode(vgetexp, *$1, kids);
                                }
    | MVARIABLE '(' expr ',' expr ')'   {
                                            std::vector<Interpreter::Node*> kids;
                                            kids.push_back($3);
                                            kids.push_back($5);
                                            $$ = new Interpreter::OperationNode(mgetexp, *$1, kids);
                                        }
    | error expr                        {
                                            std::cerr << "Error at line " << @1.first_line << std::endl;
                                            delete $2;
                                        }
;

type:   
    INT                         {$$ = $1;}
    | CINT                      {$$ = $1;}
    | VINT                      {$$ = $1;}
    | MINT                      {$$ = $1;}
    | CVINT                     {$$ = $1;}
    | CMINT                     {$$ = $1;}
    | BOOLEAN                   {$$ = $1;}
    | CBOOLEAN                  {$$ = $1;}
    | VBOOLEAN                  {$$ = $1;}
    | MBOOLEAN                  {$$ = $1;}
    | CVBOOLEAN                 {$$ = $1;}
    | CMBOOLEAN                 {$$ = $1;}
;

const:
    INTEGER                     {$$ = $1;}
    | BOOL                      {$$ = $1;}
;

%%

void yyerror(const char* error) {
    std::cerr << error << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc == 1) yyin = std::fopen("test.txt", "r");
    else if (argc == 2) yyin = std::fopen(argv[1], "r");
    else {
        std::cerr << "Invalid amount of parameters, please try again!" << std::endl;
        return 1;
    }
    yyparse();
    std::fclose(yyin);
    std::cerr << "Total amount of error: " << yynerrs << std::endl;
    return 0;
}