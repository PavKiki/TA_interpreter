%{
#include <exception>
#include <iostream>
#include <sstream>
#include <vector>
#include <memory>
#include "classes/BoolNode.h"
#include "classes/IntegerNode.h"
#include "classes/OperationNode.h"

std::stringstream out;

int yylex(void);
void yyerror(const char*);

%}

%locations

%union
{
    Interpreter::BoolNode* boolPtr;
    Interpreter::IntegerNode* intPtr;
    Interpreter::Node* ptr;
};

%nonassoc END
%token <boolPtr> BOOL
%token <intPtr> INTEGER

%left '+' '-'
%left '*' '/'

%type <ptr> expr

%%

program:
    program expr                {$2->print(out); std::cout << out.c_str();}
    |                           {std::cout << "There is nothing here...";}

expr:
    INTEGER                     {$<ptr>$ = $1;}
    expr '+' expr               {
                                    std::vector<std::shared_ptr<Node>> kids; 
                                    kids.push_back($1); 
                                    kids.push_back($3);
                                    $$ = std::make_shared<Interpreter::OperationNode>(plus, kids);
                                }

%%

void yyerror(const char* error) {
    std::cerr << error << std::endl;
}

int main(void) {
    yyparse();
    return 0;
}