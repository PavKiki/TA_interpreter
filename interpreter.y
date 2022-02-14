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
%destructor {delete $$;} <varName>
%destructor {delete $$;} <varOpPtr>

%%

program:
    func                    {outputOut(); exit(0);}
;

func:
    func stmts                  {
                                    try {
                                        $2->execute();
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
    | func error                {
                                    std::cerr << "Error at line " << @2.first_line << std::endl; 
                                    yyerrok;
                                }
    |                           {}
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
                                    std::cerr << "Error at line " << @1.first_line << std::endl;
                                    yyerrok;
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
;

robotactions:
    robotright        {$$ = $1;}
    | robotleft         {$$ = $1;}
;

robotmove:
    MOVE '(' expr ')'           {
                                    try {   
                                        std::vector<Interpreter::Node*> kids;
                                        kids.push_back($3);
                                        $$ = new Interpreter::OperationNode(move, kids);
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
;

robotright:
    RIGHT                       {
                                    try {        
                                        std::vector<Interpreter::Node*> kids;
                                        $$ = new Interpreter::OperationNode(right, kids);
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
;

robotleft:
    LEFT                        {
                                    try {
                                        std::vector<Interpreter::Node*> kids;
                                        $$ = new Interpreter::OperationNode(left, kids);
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
;

robotwall:
    WALL                        {
                                    try {        
                                        std::vector<Interpreter::Node*> kids;
                                        $$ = new Interpreter::OperationNode(wall, kids);
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
;

robotexit:
    ROBEX                       {
                                    try {
                                        std::vector<Interpreter::Node*> kids;
                                        $$ = new Interpreter::OperationNode(exxit, kids);
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
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
    FORR declaration DOUBLEDOT expr NEWLINE begfor stmts endfor {  
                                                                    try {
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
                                                                    try {
                                                                        dynamic_cast<Interpreter::return_func*>($1)->rets.push_back({$3, *$4});
                                                                        $$ = $1;
                                                                    }
                                                                    catch (const char* error) {
                                                                        std::cerr << error << std::endl;
                                                                    }
                                                                }
    | return_func error                                         {
                                                                    std::cerr << "Error at line " << @2.first_line << std::endl; 
                                                                    std::cerr << "Incorrect value in return variables" << std::endl;
                                                                    yyerrok;
                                                                }                                                          
;

args_func:
     '[' type VAR                                                       {$$ = new Interpreter::args_func($2, *$3);}
    | '[' type VAR DECLARE expr                                         {$$ = new Interpreter::args_func($2, *$3, $5);}
    | '[' type VAR DECLARE vector                                       {$$ = new Interpreter::args_func($2, *$3, $5);}
    | '[' type VAR DECLARE matrix                                       {$$ = new Interpreter::args_func($2, *$3, $5);}
    | args_func ',' type VAR                                            {
                                                                            try {
                                                                                if (dynamic_cast<Interpreter::args_func*>($1)->isClosed) yyerror("Invalid arguments initialization!");
                                                                                dynamic_cast<Interpreter::args_func*>($1)->addNonDefault($3, *$4);
                                                                                $$ = $1;
                                                                            }
                                                                            catch (const char* error) {
                                                                                std::cerr << error << std::endl;
                                                                            }
                                                                        }
    | args_func ',' type VAR DECLARE expr                               {
                                                                            try {
                                                                                if (dynamic_cast<Interpreter::args_func*>($1)->isClosed) yyerror("Invalid arguments initialization!");
                                                                                dynamic_cast<Interpreter::args_func*>($1)->addDefault($3, *$4, $6);
                                                                                $$ = $1;
                                                                            }
                                                                            catch (const char* error) {
                                                                                std::cerr << error << std::endl;
                                                                            }                                                                        
                                                                        }
    | args_func ',' type VAR DECLARE vector                             {
                                                                            try {
                                                                                if (dynamic_cast<Interpreter::args_func*>($1)->isClosed) yyerror("Invalid arguments initialization!");
                                                                                dynamic_cast<Interpreter::args_func*>($1)->addDefault($3, *$4, $6);
                                                                                $$ = $1;
                                                                            }
                                                                            catch (const char* error) {
                                                                                std::cerr << error << std::endl;
                                                                            }                                                                        
                                                                        }
    | args_func ',' type VAR DECLARE matrix                             {
                                                                            try {
                                                                                if (dynamic_cast<Interpreter::args_func*>($1)->isClosed) yyerror("Invalid arguments initialization!");
                                                                                dynamic_cast<Interpreter::args_func*>($1)->addDefault($3, *$4, $6);
                                                                                $$ = $1;
                                                                            }
                                                                            catch (const char* error) {
                                                                                std::cerr << error << std::endl;
                                                                            }                                                                        
                                                                        }
    | args_func ']'                                                     {
                                                                            try {
                                                                                dynamic_cast<Interpreter::args_func*>($1)->isClosed = true;
                                                                                $$ = $1;
                                                                            }
                                                                            catch (const char* error) {
                                                                                std::cerr << error << std::endl;
                                                                            }                                                                        
                                                                        }
    | args_func error                                                   {
                                                                            std::cerr << "Error at line " << @2.first_line << std::endl; 
                                                                            std::cerr << "Incorrect parameter in function description" << std::endl;
                                                                            yyerrok;
                                                                        }
;

function_head:
    '[' return_func ']' DECLARE FUNC VAR '(' args_func ')'              {
                                                                            try {
                                                                                auto plug = new Interpreter::func_descript(dynamic_cast<Interpreter::return_func*>($2)->rets,
                                                                                    dynamic_cast<Interpreter::args_func*>($8)->args,
                                                                                    dynamic_cast<Interpreter::args_func*>($8)->def_args, *$6);
                                                                                Interpreter::funcStorage.insert_or_assign(*$6, plug);
                                                                                $$ = plug;
                                                                            }
                                                                            catch (const char* error) {
                                                                                std::cerr << error << std::endl;
                                                                            }
                                                                        }
;

function:
    function_head B NEWLINE stmts E                                     {
                                                                            try {
                                                                                dynamic_cast<Interpreter::func_descript*>($1)->toExec = $4;
                                                                                Interpreter::storagePtr = &Interpreter::varStorage;
                                                                                Interpreter::isConstPtr = &Interpreter::isConst;
                                                                                $$ = $1;
                                                                            }
                                                                            catch (const char* error) {
                                                                                std::cerr << error << std::endl;
                                                                            }
                                                                        }
;

callfunc_args:
    expr                                {
                                            $$ = new Interpreter::callfunc_args(expR, $1);
                                        }
    | vector                            {
                                            $$ = new Interpreter::callfunc_args(vectoR, $1);
                                        }
    | matrix                            {
                                            $$ = new Interpreter::callfunc_args(matriX, $1);
                                        }
    | DFLT                              {
                                            $$ = new Interpreter::callfunc_args(defaulT, nullptr); 
                                        }
    | callfunc_args ',' expr            {   
                                            try {
                                                dynamic_cast<Interpreter::callfunc_args*>($1)->addArg(expR, $3);
                                                $$ = $1;
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            } 
                                        }
    | callfunc_args ',' vector          {
                                            try {
                                                dynamic_cast<Interpreter::callfunc_args*>($1)->addArg(vectoR, $3); 
                                                $$ = $1;
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            } 
                                        }
    | callfunc_args ',' matrix          {
                                            try {
                                                dynamic_cast<Interpreter::callfunc_args*>($1)->addArg(matriX, $3); 
                                                $$ = $1;
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            } 
                                        }
    | callfunc_args ',' DFLT            {
                                            try {
                                                dynamic_cast<Interpreter::callfunc_args*>($1)->addArg(defaulT, nullptr); 
                                                $$ = $1;
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            } 
                                        }
    | callfunc_args error               {
                                            std::cerr << "Error at line " << @2.first_line << std::endl;
                                            std::cerr << "Incorrect parameter in function call" << std::endl;
                                            yyerrok;
                                        }
;

callfunction:
    '(' return_func ')' DECLARE FVARIABLE '[' callfunc_args ']'     {   
                                                                        try {
                                                                            $$ = new Interpreter::callfunc(*$5, dynamic_cast<Interpreter::return_func*>($2)->rets, 
                                                                            dynamic_cast<Interpreter::callfunc_args*>($7)->args);
                                                                        }
                                                                        catch (const char* error) {
                                                                            std::cerr << error << std::endl;
                                                                        }
                                                                    }    
;

matrix:
    '{' listexprs '}'                           {$$ = $2;}
    | MVARIABLE '(' vector ',' '[' ']' ')'      {   
                                                    try {
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
    | MVARIABLE                                 {
                                                    try {
                                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                        $$ = new Interpreter::ContainerMatrixNode(kids, getmat, *$1);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
    | matrix '*' matrix                         {
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
    | matrix ELEMMULT matrix                    {
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
    | matrix '\''                               {
                                                    try {
                                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($1));
                                                        $$ = new Interpreter::ContainerMatrixNode(kids, mtransposition);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
    | matrix RIGHTSHIFT                         {
                                                    try {
                                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($1));
                                                        $$ = new Interpreter::ContainerMatrixNode(kids, mcycshiftright);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
    | matrix LEFTSHIFT                          {
                                                    try {
                                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>($1));
                                                        $$ = new Interpreter::ContainerMatrixNode(kids, mcycshiftleft);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
    | vector '\''                               {
                                                    try {
                                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                        kids.push_back((Interpreter::ContainerMatrixNode*)($1));
                                                        $$ = new Interpreter::ContainerMatrixNode(kids, vtransposition);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
    | matrix ELEMMULT vector                    {
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
    | matrix ELEMMULT expr                      {
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
    | VAR                                       {
                                                    std::cerr << "Variable \"" << *$1 << "\" is not declared!" << std::endl;
                                                    exit(1);     
                                                }
;

listexprs:
    vector ',' vector                   {
                                            try {
                                                $$ = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::ContainerVectorNode*>($1));
                                                dynamic_cast<Interpreter::ContainerMatrixNode*>($$)->addData(dynamic_cast<Interpreter::ContainerVectorNode*>($3));
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | listexprs ',' vector              {
                                            try {
                                                dynamic_cast<Interpreter::ContainerMatrixNode*>($1)->addData(dynamic_cast<Interpreter::ContainerVectorNode*>($3));
                                                $$ = $1;
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | listexprs error                   {
                                            std::cerr << "Error at line " << @2.first_line << std::endl;
                                            std::cerr << "Incorrect vector! It will be skipped." << std::endl;
                                            yyerrok;
                                        }
;

vector:
    '{' exprs '}'                               {$$ = $2;}
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
    | VVARIABLE                                 {
                                                    try {
                                                        std::vector<Interpreter::ContainerVectorNode*> kids;
                                                        $$ = new Interpreter::ContainerVectorNode(kids, getvec, *$1);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
    | vector ELEMMULT vector                    {   
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
    | vector RIGHTSHIFT                         {
                                                    try {
                                                        std::vector<Interpreter::ContainerVectorNode*> kids;
                                                        kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>($1));
                                                        $$ = new Interpreter::ContainerVectorNode(kids, vcycshiftright);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
    | vector LEFTSHIFT                          {
                                                    try {
                                                        std::vector<Interpreter::ContainerVectorNode*> kids;
                                                        kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>($1));
                                                        $$ = new Interpreter::ContainerVectorNode(kids, vcycshiftleft);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
    | vector ELEMMULT expr                      {
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
    | VAR                                       {
                                                    std::cerr << "Variable \"" << *$1 << "\" is not declared!" << std::endl;
                                                    exit(1);     
                                                }
;

exprs:
    expr ',' expr               {
                                    try {
                                        $$ = new Interpreter::ContainerVectorNode($1);
                                        dynamic_cast<Interpreter::ContainerVectorNode*>($$)->addData($3);
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
    | exprs ',' expr            {
                                    try {
                                        dynamic_cast<Interpreter::ContainerVectorNode*>($1)->addData($3);
                                        $$ = $1;
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
    | exprs error               {
                                    std::cerr << "Error at line " << @2.first_line << std::endl;
                                    std::cerr << "Incorrect expression in initializing expression! It will be skipped" << std::endl;
                                    yyerrok;
                                }
;

vmdeclaration:
    VVARIABLE '(' expr ')' ASSIGN expr                      {
                                                                try {
                                                                    if (!(*Interpreter::isConstPtr)[*$1]) {
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
                                                                try {
                                                                    if (!(*Interpreter::isConstPtr)[*$1]) {
                                                                        std::vector<Interpreter::Node*> kids;
                                                                        kids.push_back($3);
                                                                        $$ = new Interpreter::VecMatVariableOperationNode(vvec, *$1, dynamic_cast<Interpreter::ContainerVectorNode*>($9), kids);
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
    | MVARIABLE '(' expr ',' expr ')' ASSIGN expr           {
                                                                try {
                                                                    if (!(*Interpreter::isConstPtr)[*$1]) {
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
                                                                catch (const char* error) {
                                                                    std::cerr << error << std::endl;
                                                                }
                                                            }
    | MVARIABLE '(' expr ',' '[' ']' ')' ASSIGN vector      {
                                                                try {
                                                                    if (!(*Interpreter::isConstPtr)[*$1]) {
                                                                        std::vector<Interpreter::Node*> kids;
                                                                        kids.push_back($3);
                                                                        $$ = new Interpreter::VecMatVariableOperationNode(mexprcolumn, *$1, dynamic_cast<Interpreter::ContainerVectorNode*>($9), kids);
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
    | MVARIABLE '(' '[' ']' ',' expr ')' ASSIGN vector      {
                                                                try {
                                                                    if (!(*Interpreter::isConstPtr)[*$1]) {
                                                                        std::vector<Interpreter::Node*> kids;
                                                                        kids.push_back($6);
                                                                        $$ = new Interpreter::VecMatVariableOperationNode(mexprrow, *$1, dynamic_cast<Interpreter::ContainerVectorNode*>($9), kids);
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
    | MVARIABLE '(' vector ',' '[' ']' ')' ASSIGN matrix    {
                                                                try {
                                                                    if (!(*Interpreter::isConstPtr)[*$1]) {
                                                                        std::vector<Interpreter::Node*> kids;
                                                                        kids.push_back($3);
                                                                        $$ = new Interpreter::VecMatVariableOperationNode(mveccolumn, *$1, dynamic_cast<Interpreter::ContainerMatrixNode*>($9), kids);
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
    | MVARIABLE '(' '[' ']' ',' vector ')' ASSIGN matrix    {
                                                                try {
                                                                    if (!(*Interpreter::isConstPtr)[*$1]) {
                                                                        std::vector<Interpreter::Node*> kids;
                                                                        kids.push_back($6);
                                                                        $$ = new Interpreter::VecMatVariableOperationNode(mvecrow, *$1, dynamic_cast<Interpreter::ContainerMatrixNode*>($9), kids);
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
    | MVARIABLE '(' matrix ')' ASSIGN matrix                {
                                                                try {
                                                                    if (!(*Interpreter::isConstPtr)[*$1]) {
                                                                        std::vector<Interpreter::Node*> kids;
                                                                        kids.push_back($3);
                                                                        $$ = new Interpreter::VecMatVariableOperationNode(mmat, *$1, dynamic_cast<Interpreter::ContainerMatrixNode*>($6), kids);
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
;

declaration:
    type VAR DECLARE expr                       {        
                                                    try {
                                                        if ($1 == Interpreter::INT || $1 == Interpreter::CINT) {
                                                            auto plug = new Interpreter::IntegerNode();
                                                            Interpreter::storagePtr->insert_or_assign(*$2, plug);
                                                            if ($1 == Interpreter::CINT) Interpreter::isConstPtr->insert_or_assign(*$2, true);
                                                            $$ = new Interpreter::VariableOperationNode($1, declare, *$2, $4);
                                                        }
                                                        else if ($1 == Interpreter::BOOL || $1 == Interpreter::CBOOL) {
                                                            auto plug = new Interpreter::BoolNode();
                                                            Interpreter::storagePtr->insert_or_assign(*$2, plug);
                                                            if ($1 == Interpreter::CBOOL) Interpreter::isConstPtr->insert_or_assign(*$2, true);
                                                            $$ = new Interpreter::VariableOperationNode($1, declare, *$2, $4);
                                                        }
                                                        else yyerror("Type mismatch!");
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
    | type VAR DECLARE vector                   {
                                                    try {
                                                        if ($1 == Interpreter::VINT || $1 == Interpreter::CVINT || $1 == Interpreter::VBOOL || $1 == Interpreter::CVBOOL) {
                                                            auto plug = new Interpreter::AbstractVectorNode();
                                                            Interpreter::storagePtr->insert_or_assign(*$2, plug);
                                                            if ($1 == Interpreter::CVBOOL || $1 == Interpreter::CVINT) Interpreter::isConstPtr->insert_or_assign(*$2, true);
                                                            $$ = new Interpreter::VariableOperationNode($1, declare, *$2, dynamic_cast<Interpreter::ContainerVectorNode*>($4));
                                                        }
                                                        else yyerror("Type mismatch!");
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
    | type VAR DECLARE matrix                   {
                                                    try {
                                                        if ($1 == Interpreter::MINT || $1 == Interpreter::CMINT || $1 == Interpreter::MBOOL || $1 == Interpreter::CMBOOL) {
                                                            auto plug = new Interpreter::AbstractMatrixNode();
                                                            Interpreter::storagePtr->insert_or_assign(*$2, plug);
                                                            if ($1 == Interpreter::CMBOOL || $1 == Interpreter::CMINT) Interpreter::isConstPtr->insert_or_assign(*$2, true);
                                                            $$ = new Interpreter::VariableOperationNode($1, declare, *$2, dynamic_cast<Interpreter::ContainerMatrixNode*>($4));
                                                        }
                                                        else yyerror("Type mismatch!");
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
    | type VAR ASSIGN                           {
                                                    std::cerr << "Error at line " << @3.first_line << std::endl;
                                                    std::cerr << "Invalid form of assigning/declaration of variable " << *$2  << std::endl; 
                                                    std::cerr << "Invalid form of assigning, maybe you expected declaration as \"=\"" << std::endl;
                                                    exit(1);
                                                }
;

assignment:
    VARIABLE ASSIGN expr                    {
                                                try {
                                                    if (!(*Interpreter::isConstPtr)[*$1]) $$ = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *$1, $3);
                                                    else {
                                                        std::string tmp = std::string("Variable ") + *$1 + " doesn't exist or can not be changed!";
                                                        yyerror(tmp.c_str());
                                                    }
                                                }
                                                catch (const char* error) {
                                                    std::cerr << error << std::endl;
                                                }
                                            }
    | VVARIABLE ASSIGN vector               {
                                                try {
                                                    if (!(*Interpreter::isConstPtr)[*$1]) {
                                                        $$ = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *$1, dynamic_cast<Interpreter::ContainerVectorNode*>($3));
                                                    }
                                                    else {
                                                        std::string tmp = std::string("Variable ") + *$1 + " doesn't exist or can not be changed!";
                                                        yyerror(tmp.c_str());
                                                    }
                                                }
                                                catch (const char* error) {
                                                    std::cerr << error << std::endl;
                                                }
                                            }
    | MVARIABLE ASSIGN matrix               {
                                                try {
                                                    if (!(*Interpreter::isConstPtr)[*$1]) {
                                                        $$ = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *$1, dynamic_cast<Interpreter::ContainerMatrixNode*>($3));
                                                    }
                                                    else {
                                                        std::string tmp = std::string("Variable ") + *$1 + " doesn't exist or can not be changed!";
                                                        yyerror(tmp.c_str());
                                                    }
                                                }
                                                catch (const char* error) {
                                                    std::cerr << error << std::endl;
                                                }
                                            }
    | VARIABLE DECLARE                      {
                                                std::cerr << "Error at line " << @2.first_line << std::endl;
                                                std::cerr << "Invalid form of assigning/declaration of variable " << *$1  << std::endl; 
                                                std::cerr << "Invalid form of declaration, maybe you expected assignment as \"<-\"" << std::endl;
                                                exit(1);
                                            }
    | VVARIABLE DECLARE                     {
                                                std::cerr << "Error at line " << @2.first_line << std::endl;
                                                std::cerr << "Invalid form of assigning/declaration of variable " << *$1  << std::endl; 
                                                std::cerr << "Invalid form of declaration, maybe you expected assignment as \"<-\"" << std::endl;
                                                exit(1);
                                            }
    | MVARIABLE DECLARE                     {
                                                std::cerr << "Error at line " << @2.first_line << std::endl;
                                                std::cerr << "Invalid form of assigning/declaration of variable " << *$1  << std::endl; 
                                                std::cerr << "Invalid form of declaration, maybe you expected assignment as \"<-\"" << std::endl;
                                                exit(1);
                                            }
;

print:
    PRINT '(' expr ')'          {
                                    try {
                                        std::vector<Interpreter::Node*> kids; 
                                        kids.push_back($3);
                                        $$ = new Interpreter::OperationNode(pprint, kids); 
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
    | PRINT '(' VVARIABLE ')'   {
                                    try {
                                        $$ = new Interpreter::OperationNode(pprint, *$3); 
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
    | PRINT '(' MVARIABLE ')'   {
                                    try {
                                        $$ = new Interpreter::OperationNode(pprint, *$3);  
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
    | PRINT '(' VAR ')'         {
                                    std::cerr << "Error at line " << @3.first_line << std::endl;
                                    std::cerr << "Can not print not initialised variable" << std::endl;
                                    yyerrok;
                                }
    | PRINT '(' FVARIABLE ')'   {
                                    std::cerr << "Error at line " << @3.first_line << std::endl;
                                    std::cerr << "Can not print function, you should call it" << std::endl;
                                    yyerrok;
                                }
;

expr:
    const                               {$$ = $1;}
    | robotexit                         {$$ = $1;}
    | robotmove                         {$$ = $1;}
    | robotwall                         {$$ = $1;}
    | VARIABLE                          {   
                                            try {
                                                $$ = new Interpreter::OperationNode(gscalar, *$1);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | '-' expr %prec UMINUS             {
                                            try {
                                                std::vector<Interpreter::Node*> kids; 
                                                kids.push_back($2);
                                                $$ = new Interpreter::OperationNode(uminus, kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | expr '+' expr                     {
                                            try {
                                                std::vector<Interpreter::Node*> kids; 
                                                kids.push_back($1); 
                                                kids.push_back($3);
                                                $$ = new Interpreter::OperationNode(plus, kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | expr '-' expr                     {
                                            try {
                                                std::vector<Interpreter::Node*> kids; 
                                                kids.push_back($1); 
                                                kids.push_back($3);
                                                $$ = new Interpreter::OperationNode(minus, kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | expr '/' expr                     {
                                            try {
                                                std::vector<Interpreter::Node*> kids; 
                                                kids.push_back($1); 
                                                kids.push_back($3);
                                                $$ = new Interpreter::OperationNode(divide, kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | expr '<' expr                     {  
                                            try {
                                                std::vector<Interpreter::Node*> kids; 
                                                kids.push_back($1); 
                                                kids.push_back($3);
                                                $$ = new Interpreter::OperationNode(less, kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | expr '>' expr                     {
                                            try {
                                                std::vector<Interpreter::Node*> kids; 
                                                kids.push_back($1); 
                                                kids.push_back($3);
                                                $$ = new Interpreter::OperationNode(greater, kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | '!' expr                          {
                                            try {
                                                std::vector<Interpreter::Node*> kids; 
                                                kids.push_back($2);
                                                $$ = new Interpreter::OperationNode(denial, kids); 
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | expr CONJUNCTION expr             {
                                            try {
                                                std::vector<Interpreter::Node*> kids; 
                                                kids.push_back($1);
                                                kids.push_back($3);
                                                $$ = new Interpreter::OperationNode(conjunction, kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | '(' expr ')'                      {$$ = $2;}
    | VVARIABLE '(' expr ')'            {
                                            try {
                                                std::vector<Interpreter::Node*> kids;
                                                kids.push_back($3);
                                                $$ = new Interpreter::OperationNode(vgetexp, *$1, kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | MVARIABLE '(' expr ',' expr ')'   {
                                            try {
                                                std::vector<Interpreter::Node*> kids;
                                                kids.push_back($3);
                                                kids.push_back($5);
                                                $$ = new Interpreter::OperationNode(mgetexp, *$1, kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
    | VAR                               {
                                            std::cerr << "Variable \"" << *$1 << "\" is not declared!" << std::endl;
                                            exit(1);     
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