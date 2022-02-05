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

\<\-                    {return ASSIGN;}

\=                      {return DECLARE;}

\.\*                    {return ELEMMULT;}

\<\<                    {return LEFTSHIFT;}

\>\>                    {return RIGHTSHIFT;}

\:                      {return DOUBLEDOT;}

[-+*/()\<\>!{},\'\[\]]  {return *yytext;}

and|&&                  {return CONJUNCTION;}

print                   {return PRINT;}

int                     {yylval.vtype = Interpreter::INT; return INT;}      

cint                    {yylval.vtype = Interpreter::CINT; return CINT;}    

vint                    {yylval.vtype = Interpreter::VINT; return VINT;}    

mint                    {yylval.vtype = Interpreter::MINT; return MINT;}    

cvint                   {yylval.vtype = Interpreter::CVINT; return CVINT;}  

cmint                   {yylval.vtype = Interpreter::CMINT; return CMINT;}  

bool                    {yylval.vtype = Interpreter::BOOL; return BOOLEAN;}

cbool                   {yylval.vtype = Interpreter::CBOOL; return CBOOLEAN;}

vbool                   {yylval.vtype = Interpreter::VBOOL; return VBOOLEAN;}

mbool                   {yylval.vtype = Interpreter::MBOOL; return MBOOLEAN;}

cvbool                  {yylval.vtype = Interpreter::CVBOOL; return CVBOOLEAN;}

cmbool                  {yylval.vtype = Interpreter::CMBOOL; return CMBOOLEAN;}

if                      {return IF;}

for                     {return FORR;}

function                {return FUNC;}

begin                   {return B;}

end                     {return E;}

"begin[if]"             {return BEGIF;}

"end[if]"               {return ENDIF;}

"begin[for]"            {return BEGFOR;}

"end[for]"              {return ENDFOR;}

move                    {return MOVE;}

right                   {return RIGHT;}

left                    {return LEFT;}

exit                    {return ROBEX;}

wall                    {return WALL;}

[a-zA-Z][a-zA-Z0-9_]*   {
                            yylloc.last_line = yylloc.first_line = yylineno; yylval.varName = new std::string(yytext);
                            auto search = Interpreter::varStorage.find(*(yylval.varName));
                            if (search != Interpreter::varStorage.end()) {
                                if (search->second->nType == Interpreter::INTMATNODE || search->second->nType == Interpreter::BOOLMATNODE || search->second->nType == Interpreter::ABSTRACTMATNODE) return MVARIABLE;
                                else if (search->second->nType == Interpreter::INTVECNODE || search->second->nType == Interpreter::BOOLVECNODE || search->second->nType == Interpreter::ABSTRACTVECNODE) return VVARIABLE;
                                else if (search->second->nType == Interpreter::INTNODE || search->second->nType == Interpreter::BOOLNODE) return VARIABLE;
                                else if (search->second->nType == Interpreter::FUNCNODE) return FVARIABLE;
                                else return ER;
                            }
                            if (!Interpreter::tmpStorage.empty()) {
                                auto search = Interpreter::tmpStorage.find(*(yylval.varName));
                                if (search != Interpreter::tmpStorage.end()) {
                                    if (search->second->nType == Interpreter::INTMATNODE || search->second->nType == Interpreter::BOOLMATNODE || search->second->nType == Interpreter::ABSTRACTMATNODE) return MVARIABLE;
                                    else if (search->second->nType == Interpreter::INTVECNODE || search->second->nType == Interpreter::BOOLVECNODE || search->second->nType == Interpreter::ABSTRACTVECNODE) return VVARIABLE;
                                    else if (search->second->nType == Interpreter::INTNODE || search->second->nType == Interpreter::BOOLNODE) return VARIABLE;
                                    else if (search->second->nType == Interpreter::FUNCNODE) return FVARIABLE;
                                    else return ER;
                                }
                            }
                            return VAR;
                        }

[\n]                    {return NEWLINE;}

.                       {yyerror("Unknown character!");}

%%

int yywrap(void) {
    return 1;
}