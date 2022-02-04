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
%token <varName> VARIABLE VVARIABLE MVARIABLE VAR
%token <vtype> CINT VINT MINT INT CVINT CMINT BOOLEAN CBOOLEAN VBOOLEAN MBOOLEAN CVBOOLEAN CMBOOLEAN
%token NEWLINE PRINT CONJUNCTION ELEMMULT '\'' LEFTSHIFT RIGHTSHIFT ',' IF FORR BEGIF ENDIF BEGFOR ENDFOR ER DOUBLEDOT

%left ASSIGN DECLARE
%left '<' '>' 
%left '+' '-'
%left '*' '/'
%right '!'
%nonassoc UMINUS

%type <ptr> expr const stmt stmts print exprs vector listexprs matrix vmdeclaration iff forr
%type <varOpPtr> declaration assignment
%type <vtype> type

%%

program:
    function                    {outputOut(); exit(0);}
;

function:
    function stmts              {
                                    try {
                                        $2->execute();
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
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
    | iff NEWLINE               {$$ = $1;}
    | forr NEWLINE              {$$ = $1;}
    | '(' stmts ')'             {$$ = $2;}
;

iff:
    IF expr NEWLINE BEGIF stmts ENDIF       {
                                                std::vector<Interpreter::Node*> kids;
                                                kids.push_back($2);
                                                kids.push_back($5);
                                                $$ = new Interpreter::OperationNode(iff, kids);
                                            }
;

forr:
    FORR declaration DOUBLEDOT expr NEWLINE BEGFOR stmts ENDFOR        {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back($2);
                                                                    kids.push_back($4);
                                                                    kids.push_back($7);
                                                                    $$ = new Interpreter::OperationNode(forr, kids);
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
                                        auto tmp = dynamic_cast<Interpreter::AbstractMatrixNode*>(search->second)->copy();
                                        $$ = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getData(), dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getSizeX(), dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getSizeY());
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
                                            auto tmp = dynamic_cast<Interpreter::AbstractVectorNode*>(search->second)->copy();
                                            $$ = new Interpreter::ContainerVectorNode(dynamic_cast<Interpreter::AbstractVectorNode*>(tmp)->getData(), dynamic_cast<Interpreter::AbstractVectorNode*>(tmp)->getSize());
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
                                                        $$ = new Interpreter::VariableOperationNode($1, declare, *$2, $4);
                                                    }
                                                    else if ($1 == Interpreter::BOOL || $1 == Interpreter::CBOOL) {
                                                        auto plug = new Interpreter::BoolNode();
                                                        Interpreter::varStorage.insert_or_assign(*$2, plug);
                                                        $$ = new Interpreter::VariableOperationNode($1, declare, *$2, $4);
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
    | type VAR DECLARE vector              {
                                                    if ($1 == Interpreter::VINT || $1 == Interpreter::CVINT || $1 == Interpreter::VBOOL || $1 == Interpreter::CVBOOL) {
                                                        auto plug = new Interpreter::AbstractVectorNode();
                                                        Interpreter::varStorage.insert_or_assign(*$2, plug);
                                                        $$ = new Interpreter::VariableOperationNode($1, declare, *$2, dynamic_cast<Interpreter::ContainerVectorNode*>($4));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
    | type VAR DECLARE matrix              {
                                                    if ($1 == Interpreter::MINT || $1 == Interpreter::CMINT || $1 == Interpreter::MBOOL || $1 == Interpreter::CMBOOL) {
                                                        auto plug = new Interpreter::AbstractMatrixNode();
                                                        Interpreter::varStorage.insert_or_assign(*$2, plug);
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
                                        if (search->second->nType == Interpreter::INTVECNODE) {
                                            $$ = new Interpreter::OperationNode(vintgetexp, kids);
                                        }
                                        else if (search->second->nType == Interpreter::BOOLVECNODE) {
                                            $$ = new Interpreter::OperationNode(vboolgetexp, kids);
                                        }
                                }
    | MVARIABLE '(' expr ',' expr ')'   {
                                            auto search = Interpreter::varStorage.find(*$1);
                                                std::vector<Interpreter::Node*> kids;
                                                kids.push_back($3);
                                                kids.push_back($5);
                                                kids.push_back(search->second);
                                                if (search->second->nType == Interpreter::INTMATNODE) {
                                                    $$ = new Interpreter::OperationNode(mintgetexp, kids);
                                                }
                                                else if (search->second->nType == Interpreter::BOOLMATNODE) {
                                                    $$ = new Interpreter::OperationNode(mboolgetexp, kids);
                                                }
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

int main(void) {
    yyin = std::fopen("test.txt", "r");
    yyparse();
    std::fclose(yyin);
    return 0;
}