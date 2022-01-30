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
%token <varName> VARIABLE
%token <vtype> CINT VINT MINT INT CVINT CMINT BOOLEAN CBOOLEAN VBOOLEAN MBOOLEAN CVBOOLEAN CMBOOLEAN
%token NEWLINE PRINT CONJUNCTION

%left ASSIGN DECLARE ','
%left '<' '>' 
%left '+' '-'
%left '*' '/'
%right '!'

%type <ptr> expr const stmt stmts print exprs
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
    | print NEWLINE             {$$ = $1;}
    | declaration NEWLINE       {$$ = $1;}
    | assignment NEWLINE        {$$ = $1;}
    | '(' stmts ')'             {$$ = $2;}
;

exprs:
    expr ',' expr               {
                                    $$ = new Interpreter::ContainerVectorNode($1);
                                    dynamic_cast<Interpreter::ContainerVectorNode*>($$)->addData($3);
                                }
    | exprs ',' expr            {dynamic_cast<Interpreter::ContainerVectorNode*>($$)->addData($3);}
;

declaration:
    type VARIABLE DECLARE expr              {$$ = new Interpreter::VariableOperationNode($1, declare, *$2, $4);}
    | type VARIABLE DECLARE '{' exprs '}'   {
                                                std::vector<Interpreter::Node*> tmp;
                                                dynamic_cast<Interpreter::ContainerVectorNode*>($5)->getVector(tmp);    
                                                $$ = new Interpreter::VariableOperationNode($1, declare, *$2, tmp, dynamic_cast<Interpreter::ContainerVectorNode*>($5)->getSize());
                                            }
;

assignment:
    VARIABLE ASSIGN expr            {
                                        auto search = Interpreter::varStorage.find(*$1);
                                        if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*$1]) $$ = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *$1, $3);
                                        else {
                                            std::string tmp = std::string("Variable ") + *$1 + " doesn't exist or can not be changed!";
                                            yyerror(tmp.c_str());
                                        }
                                    }
    | VARIABLE ASSIGN '{' exprs '}'   {
                                        auto search = Interpreter::varStorage.find(*$1);
                                        if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*$1]) {
                                            std::vector<Interpreter::Node*> tmp;
                                            dynamic_cast<Interpreter::ContainerVectorNode*>($4)->getVector(tmp);
                                            $$ = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *$1, tmp, dynamic_cast<Interpreter::ContainerVectorNode*>($4)->getSize());
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
;

expr:
    const                       {$$ = $1;}
    | VARIABLE                  {
                                    auto search = Interpreter::varStorage.find(*$1);
                                    if (search != Interpreter::varStorage.end()) $$ = search->second;
                                    else {
                                        std::string tmp = std::string("Variable ") + *$1 + " is not declared!";
                                        yyerror(tmp.c_str());
                                    }
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
    | expr '*' expr             {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back($1); 
                                    kids.push_back($3);
                                    $$ = new Interpreter::OperationNode(multiply, kids);
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