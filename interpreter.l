%{
#include "classes/BoolNode.h"
#include "classes/IntegerNode.h"
#include "classes/OperationNode.h"
#include "interpreter.tab.h"

void yyerror(const char*);
%}

%option yylineno

%%

[ \t]+                  ;

true|false              {yylloc.last_line = yylloc.first_line = yylineno; yylval.boolPtr = new Interpreter::BoolNode(yytext); return BOOL;}

0[0|1]+                 {yylloc.last_line = yylloc.first_line = yylineno; yylval.intPtr = new Interpreter::IntegerNode(binary, yytext); return INTEGER;}

[0-9]+                  {yylloc.last_line = yylloc.first_line = yylineno; yylval.intPtr = new Interpreter::IntegerNode(decimal, yytext); return INTEGER;}

\<\-                    {yylloc.last_line = yylloc.first_line = yylineno; return ASSIGN;}

\=                      {yylloc.last_line = yylloc.first_line = yylineno; return DECLARE;}

\.\*                    {yylloc.last_line = yylloc.first_line = yylineno; return ELEMMULT;}

\<\<                    {yylloc.last_line = yylloc.first_line = yylineno; return LEFTSHIFT;}

\>\>                    {yylloc.last_line = yylloc.first_line = yylineno; return RIGHTSHIFT;}

\:                      {yylloc.last_line = yylloc.first_line = yylineno; return DOUBLEDOT;}

[-+*/()\<\>!{},\'\[\]]  {yylloc.last_line = yylloc.first_line = yylineno; return *yytext;}

and|&&                  {yylloc.last_line = yylloc.first_line = yylineno; return CONJUNCTION;}

print                   {yylloc.last_line = yylloc.first_line = yylineno; return PRINT;}

int                     {yylloc.last_line = yylloc.first_line = yylineno; yylval.vtype = Interpreter::INT; return INT;}      

cint                    {yylloc.last_line = yylloc.first_line = yylineno; yylval.vtype = Interpreter::CINT; return CINT;}    

vint                    {yylloc.last_line = yylloc.first_line = yylineno; yylval.vtype = Interpreter::VINT; return VINT;}    

mint                    {yylloc.last_line = yylloc.first_line = yylineno; yylval.vtype = Interpreter::MINT; return MINT;}    

cvint                   {yylloc.last_line = yylloc.first_line = yylineno; yylval.vtype = Interpreter::CVINT; return CVINT;}  

cmint                   {yylloc.last_line = yylloc.first_line = yylineno; yylval.vtype = Interpreter::CMINT; return CMINT;}  

bool                    {yylloc.last_line = yylloc.first_line = yylineno; yylval.vtype = Interpreter::BOOL; return BOOLEAN;}

cbool                   {yylloc.last_line = yylloc.first_line = yylineno; yylval.vtype = Interpreter::CBOOL; return CBOOLEAN;}

vbool                   {yylloc.last_line = yylloc.first_line = yylineno; yylval.vtype = Interpreter::VBOOL; return VBOOLEAN;}

mbool                   {yylloc.last_line = yylloc.first_line = yylineno; yylval.vtype = Interpreter::MBOOL; return MBOOLEAN;}

cvbool                  {yylloc.last_line = yylloc.first_line = yylineno; yylval.vtype = Interpreter::CVBOOL; return CVBOOLEAN;}

cmbool                  {yylloc.last_line = yylloc.first_line = yylineno; yylval.vtype = Interpreter::CMBOOL; return CMBOOLEAN;}

if                      {yylloc.last_line = yylloc.first_line = yylineno; return IF;}

for                     {yylloc.last_line = yylloc.first_line = yylineno; return FORR;}

function                {yylloc.last_line = yylloc.first_line = yylineno; return FUNC;}

begin                   {yylloc.last_line = yylloc.first_line = yylineno; return B;}

end                     {yylloc.last_line = yylloc.first_line = yylineno; return E;}

beginif                 {yylloc.last_line = yylloc.first_line = yylineno; return BEGIF;}

endif                   {yylloc.last_line = yylloc.first_line = yylineno; return ENDIF;}

beginfor                {yylloc.last_line = yylloc.first_line = yylineno; return BEGFOR;}

endfor                  {yylloc.last_line = yylloc.first_line = yylineno; return ENDFOR;}

move                    {yylloc.last_line = yylloc.first_line = yylineno; return MOVE;}

right                   {yylloc.last_line = yylloc.first_line = yylineno; return RIGHT;}

left                    {yylloc.last_line = yylloc.first_line = yylineno; return LEFT;}

exit                    {yylloc.last_line = yylloc.first_line = yylineno; return ROBEX;}

wall                    {yylloc.last_line = yylloc.first_line = yylineno; return WALL;}

dflt                    {yylloc.last_line = yylloc.first_line = yylineno; return DFLT;}

[a-zA-Z][a-zA-Z0-9_]*   {
                            yylloc.last_line = yylloc.first_line = yylineno; yylval.varName = new std::string(yytext);
                            auto search = Interpreter::varStorage.find(*(yylval.varName));
                            if (search != Interpreter::varStorage.end()) {
                                if (search->second->nType == Interpreter::INTMATNODE || search->second->nType == Interpreter::BOOLMATNODE || search->second->nType == Interpreter::ABSTRACTMATNODE) return MVARIABLE;
                                else if (search->second->nType == Interpreter::INTVECNODE || search->second->nType == Interpreter::BOOLVECNODE || search->second->nType == Interpreter::ABSTRACTVECNODE) return VVARIABLE;
                                else if (search->second->nType == Interpreter::INTNODE || search->second->nType == Interpreter::BOOLNODE) return VARIABLE;
                                else return ER;
                            }
                            auto searchfunc = Interpreter::funcStorage.find(*(yylval.varName));
                            if (searchfunc != Interpreter::funcStorage.end()) {
                                if (searchfunc->second->nType == Interpreter::FUNCNODE) return FVARIABLE;
                            }
                            return VAR;
                        }

\.\.\.\n                ;

[\n]                    {yylloc.last_line = yylloc.first_line = yylineno; return NEWLINE;}

.                       {yylloc.last_line = yylloc.first_line = yylineno; yyerror("Unknown character!");}

%%

int yywrap(void) {
    return 1;
}