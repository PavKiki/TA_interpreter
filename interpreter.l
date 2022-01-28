%{
#include "classes/BoolNode.h"
#include "classes/IntegerNode.h"
#include "interpreter.tab.h"

void yyerror(const char*);
%}

%option yylineno

%%

[ \t\n]+                ;

true|false              {yylloc.last_line = yylloc.first_line = yylineno; yylval.boolPtr = new Interpreter::BoolNode(yytext); return BOOL;}

-?0[0|1]+               {yylloc.last_line = yylloc.first_line = yylineno; yylval.intPtr = new Interpreter::IntegerNode(binary, yytext); return INTEGER;}

-?[0-9]+                {yylloc.last_line = yylloc.first_line = yylineno; yylval.intPtr = new Interpreter::IntegerNode(decimal, yytext); return INTEGER;}

[-+*/()<>]                {return *yytext;}

.                       {yyerror("Unknown character!");}

%%

int yywrap(void) {
    return 1;
}