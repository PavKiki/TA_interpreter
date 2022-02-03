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
    divide,
    less,
    greater,
    denial,
    conjunction,
    newline,
    pprint,
    vintgetexp,
    vboolgetexp,
    mintgetexp,
    mboolgetexp
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
    ContainerVectorNode* vectorData;
    ContainerMatrixNode* matrixData;
public:
    varType getVarType() {return vType;}

    varOperName getVarOpName() {return vopType;}

    int execute() override;   

    void print(std::ostringstream& strm) override;

    //default constructor
    VariableOperationNode(): OperationNode(), vType(ABSTRACT), vopType(varnothing) {};  
    //constructor for scalar
    VariableOperationNode(varType vType, varOperName vopName, std::string name, Node* data);
    //constructor for vector 
    VariableOperationNode(varType vType, varOperName vopName, std::string name, ContainerVectorNode* data): vType(vType), vopType(vopName), varName(name), vectorData(data) {};
    //constructor for matrix
    VariableOperationNode(varType vType, varOperName vopName, std::string name, ContainerMatrixNode* data): vType(vType), vopType(vopName), varName(name), matrixData(data) {};
    //destructor
    ~VariableOperationNode() {};
};

class VecMatVariableOperationNode: public Node {
private:
    std::vector<Node*> exprs;
    ContainerVectorNode* vecNode;
    ContainerMatrixNode* matNode;
    Node* src;
    VMOpName oper;
public:
    int execute() override;
    void print(std::ostringstream& strm) {};

    VecMatVariableOperationNode(): Node(VMVAROPNODE), oper(vmnothing) {};
    VecMatVariableOperationNode(VMOpName op, Node* src, std::vector<Node*> exps): oper(op), src(src), exprs(exps) {};
    VecMatVariableOperationNode(VMOpName op, Node* src, ContainerVectorNode* vec, std::vector<Node*> exps): oper(op), src(src), vecNode(vec), exprs(exps) {};
    VecMatVariableOperationNode(VMOpName op, Node* src, ContainerMatrixNode* mat, std::vector<Node*> exps): oper(op), src(src), matNode(mat), exprs(exps) {};
    ~VecMatVariableOperationNode() {for (auto& node: exprs) free(node); free(vecNode); free(matNode);}
};

Node* getScalarExprResult(varType, Node*);
std::vector<Node*> getVectorExprResult(varType, ContainerVectorNode*&);
std::vector<AbstractVectorNode*> getMatrixExprResult(varType, ContainerMatrixNode*&);

AbstractVectorNode* VECgetNode_checkType(ContainerVectorNode*, nodeType&);
}