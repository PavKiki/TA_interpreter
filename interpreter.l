%{
#include <memory>
#include "classes/BoolNode.h"
#include "classes/IntegerNode.h"
#include "interpreter.tab.h"

void yyerror(const char*);
%}

%option yylineno

%%

[ \t\n]+                  ;

true|false              {yylloc.last_line = yylloc.first_line = yylineno; yylval->boolPtr = std::make_shared<Interpreter::BoolNode>(std::to_string(*yytext)); return BOOL;}

-?[0-9]+                {yylloc.last_line = yylloc.first_line = yylineno; yylval->intPtr = std::make_shared<Interpreter::IntegerNode>(decimal, std::to_string(*yytext)); return INTEGER;}

-?0[0|1]+               {yylloc.last_line = yylloc.first_line = yylineno; yylval->intPtr = std::make_shared<Interpreter::IntegerNode>(binary, std::to_string(*yytext)); return INTEGER;}

[-+*/()]                {return *yytext;}

.                       {yyerror("Unknown character!");}

%%

int yywrap(void) {
    return 1;
}