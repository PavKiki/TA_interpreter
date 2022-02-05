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
%token NEWLINE PRINT CONJUNCTION ELEMMULT '\'' LEFTSHIFT RIGHTSHIFT ',' IF FORR ER DOUBLEDOT B E FUNC MOVE RIGHT LEFT ROBEX WALL BEGFOR BEGIF ENDIF ENDFOR

%left ASSIGN DECLARE
%left '<' '>' 
%left '+' '-'
%left '*' '/'
%right '!'
%nonassoc UMINUS

%type <ptr> expr const stmt stmts print exprs vector listexprs matrix vmdeclaration iff forr return_func args_func function callfunc_args callfunction robotmove robotright robotleft robotwall robotexit robotactions
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
    | IF error endif                        {
                                                std::cerr << "Error at line " << @2.first_line << "-" << std::endl;
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
    | FORR error endfor                                         {
                                                                    std::cerr << "Error at line " << @2.first_line << std::endl;
                                                                }
;

return_func:
    type VAR                                                    {
                                                                    try {
                                                                        if ($1 == Interpreter::INT) {
                                                                            auto plug = new Interpreter::IntegerNode();
                                                                            Interpreter::varStorage.insert_or_assign(*$2, plug);
                                                                        }
                                                                        else if ($1 == Interpreter::BOOL) {
                                                                            auto plug = new Interpreter::BoolNode();
                                                                            Interpreter::varStorage.insert_or_assign(*$2, plug);
                                                                        }
                                                                        else if ($1 == Interpreter::VINT) {
                                                                            auto plug = new Interpreter::IntegerVectorNode();
                                                                            Interpreter::varStorage.insert_or_assign(*$2, plug);
                                                                        }
                                                                        else if ($1 == Interpreter::VBOOL) {
                                                                            auto plug = new Interpreter::BoolVectorNode();
                                                                            Interpreter::varStorage.insert_or_assign(*$2, plug);
                                                                        }
                                                                        else if ($1 == Interpreter::MINT) {
                                                                            auto plug = new Interpreter::IntegerMatrixNode();
                                                                            Interpreter::varStorage.insert_or_assign(*$2, plug);
                                                                        }
                                                                        else if ($1 == Interpreter::MBOOL) {
                                                                            auto plug = new Interpreter::BoolMatrixNode();
                                                                            Interpreter::varStorage.insert_or_assign(*$2, plug);
                                                                        }
                                                                        else throw "Return parameters can not be const!";
                                                                        auto search = Interpreter::varStorage.find(*$2);
                                                                        $$ = new Interpreter::return_funcNode({$1, search->second});
                                                                        dynamic_cast<Interpreter::return_funcNode*>($$)->retVarNames.push_back(*$2);
                                                                    }
                                                                    catch (const char* error) {
                                                                        std::cerr << error << std::endl;
                                                                    }
                                                                }
    | return_func ',' type VAR                                  {
                                                                    try {
                                                                        if ($3 == Interpreter::INT) {
                                                                            auto plug = new Interpreter::IntegerNode();
                                                                            Interpreter::varStorage.insert_or_assign(*$4, plug);
                                                                        }
                                                                        else if ($3 == Interpreter::BOOL) {
                                                                            auto plug = new Interpreter::BoolNode();
                                                                            Interpreter::varStorage.insert_or_assign(*$4, plug);
                                                                        }
                                                                        else if ($3 == Interpreter::VINT) {
                                                                            auto plug = new Interpreter::IntegerVectorNode();
                                                                            Interpreter::varStorage.insert_or_assign(*$4, plug);
                                                                        }
                                                                        else if ($3 == Interpreter::VBOOL) {
                                                                            auto plug = new Interpreter::BoolVectorNode();
                                                                            Interpreter::varStorage.insert_or_assign(*$4, plug);
                                                                        }
                                                                        else if ($3 == Interpreter::MINT) {
                                                                            auto plug = new Interpreter::IntegerMatrixNode();
                                                                            Interpreter::varStorage.insert_or_assign(*$4, plug);
                                                                        }
                                                                        else if ($3 == Interpreter::MBOOL) {
                                                                            auto plug = new Interpreter::BoolMatrixNode();
                                                                            Interpreter::varStorage.insert_or_assign(*$4, plug);
                                                                        }
                                                                        else throw "Return parameters can not be const!";
                                                                        auto search = Interpreter::varStorage.find(*$4);
                                                                        dynamic_cast<Interpreter::return_funcNode*>($$)->container.push_back({$3, search->second});
                                                                        dynamic_cast<Interpreter::return_funcNode*>($$)->retVarNames.push_back(*$4);
                                                                    }
                                                                    catch (const char* error) {
                                                                        std::cerr << error << std::endl;
                                                                    }
                                                                }
    | return_func error                                     {
                                                                std::cerr << "Error at line " << @2.first_line << std::endl;
                                                                delete $1;
                                                            }
;

args_func:
     '[' type VAR ']'                                                  {$$ = new Interpreter::args_func($2, *$3);}
    | args_func ',' '[' type VAR ']'                                              {dynamic_cast<Interpreter::args_func*>($$)->addByVTypeandName($4, *$5);}
    | args_func error                                                   {
                                                                            std::cerr << "Error at line " << @2.first_line << std::endl;
                                                                            delete $1; delete $$;
                                                                        }
    | error                                                             {
                                                                            std::cerr << "Error at line " << @1.first_line << std::endl;
                                                                            delete $$;
                                                                        }
;

function:
    '[' return_func ']' DECLARE FUNC VAR '(' args_func ')' B NEWLINE stmts E    {
                                                                            auto plug = new Interpreter::func_descript(dynamic_cast<Interpreter::args_func*>($8)->localStorage, dynamic_cast<Interpreter::args_func*>($8)->localisConst, 
                                                                            dynamic_cast<Interpreter::return_funcNode*>($2)->container, dynamic_cast<Interpreter::return_funcNode*>($2)->retVarNames,
                                                                            $12, *$6, dynamic_cast<Interpreter::args_func*>($8)->types, dynamic_cast<Interpreter::args_func*>($8)->names);
                                                                            Interpreter::varStorage.insert_or_assign(*$6, plug);
                                                                            Interpreter::tmpStorage.clear();
                                                                            $$ = plug;
                                                                        }
    | error E                                                           {
                                                                            std::cerr << "Error at line " << @1.first_line << std::endl;
                                                                            delete $$;
                                                                        }
;

callfunc_args:
    expr                {$$ = new Interpreter::callfunc_args(expR, $1);}
    | vector            {$$ = new Interpreter::callfunc_args(vectoR, $1);}
    | matrix            {$$ = new Interpreter::callfunc_args(matriX, $1);}
    | callfunc_args ',' expr          {dynamic_cast<Interpreter::callfunc_args*>($$)->addArg(expR, $3);}
    | callfunc_args ',' vector        {dynamic_cast<Interpreter::callfunc_args*>($$)->addArg(vectoR, $3);}
    | callfunc_args ',' matrix        {dynamic_cast<Interpreter::callfunc_args*>($$)->addArg(matriX, $3);}
    | callfunc_args error           {
                                        std::cerr << "Error at line " << @2.first_line << std::endl;
                                        delete $1;
                                    }
    | error                         {
                                        std::cerr << "Error at line " << @1.first_line << std::endl;
                                        delete $$;
                                    }
;

callfunction:
    FVARIABLE '[' callfunc_args ']'         {$$ = new Interpreter::callfunc(*$1, dynamic_cast<Interpreter::callfunc_args*>($3)->args);}
    | error '[' callfunc_args ']'           {
                                               std::cerr << "Error at line " << @1.first_line << std::endl;
                                               delete $3; delete $$;
                                            }
;

matrix:
    '{' listexprs '}'           {$$ = $2;}
    | MVARIABLE '(' vector ',' '[' ']' ')'      {
                                                    auto search = Interpreter::varStorage.find(*$1);
                                                    std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)($3));
                                                    $$ = new Interpreter::ContainerMatrixNode(kids, mveccolumnindex);
                                                } 
    | MVARIABLE '(' '[' ']' ',' vector ')'      {
                                                    auto search = Interpreter::varStorage.find(*$1);
                                                    std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)($6));
                                                    $$ = new Interpreter::ContainerMatrixNode(kids, mvecrowindex);
                                                }
    | MVARIABLE '(' matrix ')'                  {
                                                    auto search = Interpreter::varStorage.find(*$1);
                                                    std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)($3));
                                                    $$ = new Interpreter::ContainerMatrixNode(kids, mmatindex);
                                                }
    | MVARIABLE                     {
                                        auto search = Interpreter::varStorage.find(*$1);
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>(search->second));
                                        $$ = new Interpreter::ContainerMatrixNode(kids, getmat);
                                    }
    | matrix '*' matrix             {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($1));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($3));
                                        $$ = new Interpreter::ContainerMatrixNode(kids, mmultiply);
                                    }
    | matrix ELEMMULT matrix        {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($1));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($3));
                                        $$ = new Interpreter::ContainerMatrixNode(kids, melemmultiply);
                                    }
    | matrix '\''                   {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($1));
                                        $$ = new Interpreter::ContainerMatrixNode(kids, mtransposition);
                                    }
    | matrix RIGHTSHIFT             {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($1));
                                        $$ = new Interpreter::ContainerMatrixNode(kids, mcycshiftright);
                                    }
    | matrix LEFTSHIFT              {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>($1));
                                        $$ = new Interpreter::ContainerMatrixNode(kids, mcycshiftleft);
                                    }
    | vector '\''                   {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back((Interpreter::ContainerMatrixNode*)($1));
                                        $$ = new Interpreter::ContainerMatrixNode(kids, vtransposition);
                                    }
    | matrix ELEMMULT vector        {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>($1));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($3));
                                        $$ = new Interpreter::ContainerMatrixNode(kids, MEMvec);
                                    }
    | matrix ELEMMULT expr          {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>($1));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($3));
                                        $$ = new Interpreter::ContainerMatrixNode(kids, MEMexpr);
                                    }
    | error matrix                  {
                                               std::cerr << "Error at line " << @1.first_line << std::endl;
                                               delete $2;
                                            }
    | error vector                  {
                                               std::cerr << "Error at line " << @1.first_line << std::endl;
                                               delete $2;
                                            }
    | error expr                    {
                                               std::cerr << "Error at line " << @1.first_line << std::endl;
                                               delete $2;
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
                                                    auto search = Interpreter::varStorage.find(*$1);
                                                    std::vector<Interpreter::ContainerVectorNode*> kids;
                                                    kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                    kids.push_back(static_cast<Interpreter::ContainerVectorNode*>($3));
                                                    $$ = new Interpreter::ContainerVectorNode(kids, vvecindex);
                                                }
    | MVARIABLE '(' expr ',' '['']' ')'         {
                                                    auto search = Interpreter::varStorage.find(*$1);
                                                    std::vector<Interpreter::ContainerVectorNode*> kids;
                                                    kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                    kids.push_back(static_cast<Interpreter::ContainerVectorNode*>($3));
                                                    $$ = new Interpreter::ContainerVectorNode(kids, mexprcolumnindex);
                                                }
    | MVARIABLE '(' '['']' ',' expr ')'         {
                                                    auto search = Interpreter::varStorage.find(*$1);
                                                    std::vector<Interpreter::ContainerVectorNode*> kids;
                                                    kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerVectorNode*)($6));
                                                    $$ = new Interpreter::ContainerVectorNode(kids, mexprrowindex);
                                                }
    | VVARIABLE                         {
                                            auto search = Interpreter::varStorage.find(*$1);
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                            $$ = new Interpreter::ContainerVectorNode(kids, getvec);
                                        }
    | vector ELEMMULT vector            {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>($1));
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>($3));
                                            $$ = new Interpreter::ContainerVectorNode(kids, velemmultiply);
                                        }
    | vector RIGHTSHIFT                 {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>($1));
                                            $$ = new Interpreter::ContainerVectorNode(kids, vcycshiftright);
                                        }
    | vector LEFTSHIFT                  {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>($1));
                                            $$ = new Interpreter::ContainerVectorNode(kids, vcycshiftleft);
                                        }
    | vector ELEMMULT expr              {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>($1));
                                            kids.push_back(static_cast<Interpreter::ContainerVectorNode*>($3));
                                            $$ = new Interpreter::ContainerVectorNode(kids, VEMexpr);
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
                                                    auto search = Interpreter::varStorage.find(*$1);
                                                    if (!Interpreter::isConst[*$1]) {
                                                        std::vector<Interpreter::Node*> kids;
                                                        kids.push_back($3);
                                                        kids.push_back($6);
                                                        $$ = new Interpreter::VecMatVariableOperationNode(vexpr, search->second, kids);
                                                    }
                                                    else {
                                                        std::string tmp = std::string("Variable ") + *$1 + " can not be changed!";
                                                        yyerror(tmp.c_str());
                                                    }
                                                    
                                                }
    | VVARIABLE '(' vector ',' '[' ']' ')' ASSIGN vector    {
                                                                auto search = Interpreter::varStorage.find(*$1);
                                                                if (!Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($3);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(vvec, search->second, dynamic_cast<Interpreter::ContainerVectorNode*>($9), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' expr ',' expr ')' ASSIGN expr           {
                                                                auto search = Interpreter::varStorage.find(*$1);
                                                                if (!Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($3);
                                                                    kids.push_back($5);
                                                                    kids.push_back($8);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mexpr, search->second, kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' expr ',' '[' ']' ')' ASSIGN vector      {
                                                                auto search = Interpreter::varStorage.find(*$1);
                                                                if (!Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($3);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mexprcolumn, search->second, dynamic_cast<Interpreter::ContainerVectorNode*>($9), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' '[' ']' ',' expr ')' ASSIGN vector      {
                                                                auto search = Interpreter::varStorage.find(*$1);
                                                                if (!Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($6);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mexprrow, search->second, dynamic_cast<Interpreter::ContainerVectorNode*>($9), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' vector ',' '[' ']' ')' ASSIGN matrix    {
                                                                auto search = Interpreter::varStorage.find(*$1);
                                                                if (!Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($3);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mveccolumn, search->second, dynamic_cast<Interpreter::ContainerMatrixNode*>($9), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' '[' ']' ',' vector ')' ASSIGN matrix    {
                                                                auto search = Interpreter::varStorage.find(*$1);
                                                                if (!Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($6);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mvecrow, search->second, dynamic_cast<Interpreter::ContainerMatrixNode*>($9), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' matrix ')' ASSIGN matrix                {
                                                                auto search = Interpreter::varStorage.find(*$1);
                                                                if (!Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($3);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mmat, search->second, dynamic_cast<Interpreter::ContainerMatrixNode*>($6), kids);
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
                                    auto search = Interpreter::varStorage.find(*$1);
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back($3);
                                    kids.push_back(search->second);
                                    $$ = new Interpreter::OperationNode(vgetexp, *$1, kids);
                                }
    | MVARIABLE '(' expr ',' expr ')'   {
                                            auto search = Interpreter::varStorage.find(*$1);
                                            std::vector<Interpreter::Node*> kids;
                                            kids.push_back($3);
                                            kids.push_back($5);
                                            kids.push_back(search->second);
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