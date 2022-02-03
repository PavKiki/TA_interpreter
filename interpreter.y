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
#include "AuxFunctions.h"

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
%token <varName> VARIABLE VVARIABLE MVARIABLE
%token <vtype> CINT VINT MINT INT CVINT CMINT BOOLEAN CBOOLEAN VBOOLEAN MBOOLEAN CVBOOLEAN CMBOOLEAN
%token NEWLINE PRINT CONJUNCTION ELEMMULT '\'' LEFTSHIFT RIGHTSHIFT ','

%left ASSIGN DECLARE
%left '<' '>' 
%left '+' '-'
%left '*' '/'
%right '!'
%nonassoc UMINUS

%type <ptr> expr const stmt stmts print exprs vector listexprs matrix vmdeclaration
%type <varOpPtr> declaration assignment
%type <vtype> type

%%

program:
    function                    {outputOut(); exit(0);}
;

function:
    function stmt               {
                                    $2->execute();
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
    | '(' stmts ')'             {$$ = $2;}
;

matrix:
    '{' listexprs '}'           {$$ = $2;}
    | MVARIABLE                 {
                                    auto search = Interpreter::varStorage.find(*$1);
                                    if (search != Interpreter::varStorage.end()) {
                                        auto tmp = dynamic_cast<Interpreter::AbstractMatrixNode*>(search->second)->copy();
                                        $$ = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getData(), dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getSizeX(), dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getSizeY());
                                    }
                                    else {
                                        std::string tmp = std::string("Variable ") + *$1 + " doesn't exist!";
                                        yyerror(tmp.c_str());
                                    }
                                }
    | matrix '*' matrix             {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>($1));
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>($3));
                                        $$ = new Interpreter::ContainerMatrixNode(kids, mmultiply);
                                    }
    | matrix ELEMMULT matrix        {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>($1));
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>($3));
                                        $$ = new Interpreter::ContainerMatrixNode(kids, melemmultiply);
                                    }
    | matrix '\''                   {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>($1));
                                        $$ = new Interpreter::ContainerMatrixNode(kids, mtransposition);
                                    }
    | matrix RIGHTSHIFT             {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>($1));
                                        $$ = new Interpreter::ContainerMatrixNode(kids, mcycshiftright);
                                    }
    | matrix LEFTSHIFT              {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>($1));
                                        $$ = new Interpreter::ContainerMatrixNode(kids, mcycshiftleft);
                                    }
    | vector '\''                   {
                                        auto kid = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::ContainerVectorNode*>($1));
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>(kid));
                                        $$ = new Interpreter::ContainerMatrixNode(kids, mtransposition);
                                    }
    | matrix ELEMMULT vector        {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>($1));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($3));
                                        $$ = new Interpreter::ContainerMatrixNode(kids, mcycshiftleft);
                                    }
    | matrix ELEMMULT expr          {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>($1));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>($3));
                                        $$ = new Interpreter::ContainerMatrixNode(kids, MEMexpr);
                                    }
;

listexprs:
    vector ',' vector                   {
                                            $$ = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::ContainerVectorNode*>($1));
                                            dynamic_cast<Interpreter::ContainerMatrixNode*>($$)->addData(dynamic_cast<Interpreter::ContainerVectorNode*>($3));
                                        }
    | listexprs ',' vector              {dynamic_cast<Interpreter::ContainerMatrixNode*>($$)->addData(dynamic_cast<Interpreter::ContainerVectorNode*>($3));}
;

vector:
    '{' exprs '}'                       {$$ = $2;}
    | VVARIABLE                         {
                                            auto search = Interpreter::varStorage.find(*$1);
                                            if (search != Interpreter::varStorage.end()) {
                                                auto tmp = dynamic_cast<Interpreter::AbstractVectorNode*>(search->second)->copy();
                                                $$ = new Interpreter::ContainerVectorNode(dynamic_cast<Interpreter::AbstractVectorNode*>(tmp)->getData(), dynamic_cast<Interpreter::AbstractVectorNode*>(tmp)->getSize());
                                            }
                                            else {
                                                std::string tmp = std::string("Variable ") + *$1 + " doesn't exist!";
                                                yyerror(tmp.c_str());
                                            }
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
;

exprs:
    expr ',' expr               {
                                    $$ = new Interpreter::ContainerVectorNode($1);
                                    dynamic_cast<Interpreter::ContainerVectorNode*>($$)->addData($3);
                                }
    | exprs ',' expr            {dynamic_cast<Interpreter::ContainerVectorNode*>($$)->addData($3);}
;

vmdeclaration:
    VVARIABLE '(' expr ')' ASSIGN expr          {
                                                    auto search = Interpreter::varStorage.find(*$1);
                                                    if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*$1]) {
                                                        std::vector<Interpreter::Node*> kids;
                                                        kids.push_back($3);
                                                        kids.push_back($6);
                                                        $$ = new Interpreter::VecMatVariableOperationNode(vexpr, search->second, kids);
                                                    }
                                                    else {
                                                        std::string tmp = std::string("Variable ") + *$1 + " doesn't exist or can not be changed!";
                                                        yyerror(tmp.c_str());
                                                    }
                                                    
                                                }
    | VVARIABLE '(' vector ',' '[' ']' ')' ASSIGN vector    {
                                                                auto search = Interpreter::varStorage.find(*$1);
                                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($3);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(vvec, search->second, dynamic_cast<Interpreter::ContainerVectorNode*>($9), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " doesn't exist or can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' expr ',' expr ')' ASSIGN expr           {
                                                                auto search = Interpreter::varStorage.find(*$1);
                                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($3);
                                                                    kids.push_back($5);
                                                                    kids.push_back($8);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mexpr, search->second, kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " doesn't exist or can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' expr ',' '[' ']' ')' ASSIGN vector      {
                                                                auto search = Interpreter::varStorage.find(*$1);
                                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($3);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mexprcolumn, search->second, dynamic_cast<Interpreter::ContainerVectorNode*>($9), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " doesn't exist or can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' '[' ']' ',' expr ')' ASSIGN vector      {
                                                                auto search = Interpreter::varStorage.find(*$1);
                                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($6);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mexprrow, search->second, dynamic_cast<Interpreter::ContainerVectorNode*>($9), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " doesn't exist or can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' vector ',' '[' ']' ')' ASSIGN matrix    {
                                                                auto search = Interpreter::varStorage.find(*$1);
                                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($3);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mveccolumn, search->second, dynamic_cast<Interpreter::ContainerMatrixNode*>($9), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " doesn't exist or can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' '[' ']' ',' vector ')' ASSIGN matrix    {
                                                                auto search = Interpreter::varStorage.find(*$1);
                                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($6);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mvecrow, search->second, dynamic_cast<Interpreter::ContainerMatrixNode*>($9), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " doesn't exist or can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
    | MVARIABLE '(' matrix ')' ASSIGN matrix                {
                                                                auto search = Interpreter::varStorage.find(*$1);
                                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*$1]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($3);
                                                                    $$ = new Interpreter::VecMatVariableOperationNode(mmat, search->second, dynamic_cast<Interpreter::ContainerMatrixNode*>($6), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *$1 + " doesn't exist or can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }    
;

declaration:
    type VARIABLE DECLARE expr                  {
                                                    if ($1 == Interpreter::INT || $1 == Interpreter::CINT || $1 == Interpreter::BOOL || $1 == Interpreter::CBOOL) {
                                                        $$ = new Interpreter::VariableOperationNode($1, declare, *$2, $4);
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
    | type VARIABLE DECLARE vector              {
                                                    if ($1 == Interpreter::VINT || $1 == Interpreter::CVINT || $1 == Interpreter::VBOOL || $1 == Interpreter::CVBOOL) {
                                                        $$ = new Interpreter::VariableOperationNode($1, declare, *$2, dynamic_cast<Interpreter::ContainerVectorNode*>($4));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
    | type VARIABLE DECLARE matrix              {
                                                    if ($1 == Interpreter::MINT || $1 == Interpreter::CMINT || $1 == Interpreter::MBOOL || $1 == Interpreter::CMBOOL) {
                                                        $$ = new Interpreter::VariableOperationNode($1, declare, *$2, dynamic_cast<Interpreter::ContainerMatrixNode*>($4));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
;

assignment:
    VARIABLE ASSIGN expr                    {
                                                auto search = Interpreter::varStorage.find(*$1);
                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*$1]) $$ = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *$1, $3);
                                                else {
                                                    std::string tmp = std::string("Variable ") + *$1 + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
    | VVARIABLE ASSIGN vector               {
                                                auto search = Interpreter::varStorage.find(*$1);
                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*$1]) {
                                                    $$ = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *$1, dynamic_cast<Interpreter::ContainerVectorNode*>($3));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *$1 + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
    | MVARIABLE ASSIGN matrix               {
                                                auto search = Interpreter::varStorage.find(*$1);
                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*$1]) {
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
                                    auto search = Interpreter::varStorage.find(*$3);
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back(search->second);
                                    $$ = new Interpreter::OperationNode(pprint, kids); 
                                }
    | PRINT '(' MVARIABLE ')'   {
                                    auto search = Interpreter::varStorage.find(*$3);
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back(search->second);
                                    $$ = new Interpreter::OperationNode(pprint, kids);  
                                }
;

expr:
    const                       {$$ = $1;}
    | VARIABLE                  {
                                    auto search = Interpreter::varStorage.find(*$1);
                                    if (search != Interpreter::varStorage.end()) {
                                        if (search->second->nType == Interpreter::INTNODE) {
                                            $$ = new Interpreter::IntegerNode(decimal, std::to_string(search->second->execute()));
                                        }
                                        else if (search->second->nType == Interpreter::BOOLNODE) {
                                            $$ = new Interpreter::BoolNode(search->second->execute() ? "true" : "false");
                                        }
                                    }
                                    else {
                                        std::string tmp = std::string("Variable ") + *$1 + " is not declared!";
                                        yyerror(tmp.c_str());
                                    }
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

int main(void) {
    yyin = std::fopen("test.txt", "r");
    yyparse();
    std::fclose(yyin);
    return 0;
}