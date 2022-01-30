#pragma once
#include <vector>
#include "Node.h"
#include "IntegerNode.h"
#include "BoolNode.h"

enum operName {
    nothing,
    uminus,
    plus,
    minus,
    multiply,
    divide,
    less,
    greater,
    denial,
    conjunction,
    newline,
    pprint,
};

enum varOperName {
    varnothing,
    declare,
    assign
};

namespace Interpreter {

class OperationNode: public Node {
private:
    operName operation;
    std::vector<Node*> kids;
public:
    operName getOperation() {return operation;};

    int execute() override;

    void print(std::ostringstream& strm) override;

    OperationNode(): Node(OPNODE) {operation = nothing;};
    OperationNode(operName name, std::vector<Node*> kids);
    ~OperationNode() {};
};

bool suitForArithm(Node*);
bool suitForLogic(Node*);

class VariableOperationNode: public OperationNode {
private:
    std::string varName;
    varType vType;
    varOperName vopType;
    Node* scalarData;
    std::vector<Node*> vectorData;
    size_t vector_x;
    std::vector<std::vector<Node*>> matrixData;
    size_t matrix_x, matrix_y;
public:
    varType getVarType() {return vType;}

    varOperName getVarOpName() {return vopType;}

    // int getVectorSize() {return vector_x;}

    // void getMatrixSize(size_t& x, size_t& y) {x = matrix_x; y = matrix_y;}
    
    int execute() override;   

    void print(std::ostringstream& strm) override;

    //default constructor
    VariableOperationNode(): OperationNode(), vType(ABSTRACT), vopType(varnothing) {};  
    //constructor for scalar
    VariableOperationNode(varType vType, varOperName vopName, std::string name, Node* data);
    //constructor for vector 
    VariableOperationNode(varType vType, varOperName vopName, std::string name, std::vector<Node*> data, size_t size);
    //constructor for matrix
    VariableOperationNode(varType vType, varOperName vopName, std::string name, std::vector<std::vector<Node*>> data, size_t x, size_t y);
    //destructor
    ~VariableOperationNode() {};
};

Node* getScalarExprResult(varType, Node*);
std::vector<Node*> getVectorExprResult(varType, std::vector<Node*>&);


}