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
    mboolgetexp,
    iff,
    forr,
    gscalar
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
    std::string varname;
public:
    operName getOperation() {return operation;};

    int execute() override;

    void print(std::ostringstream& strm) override;

    std::string getVN() {return varname;}

    OperationNode(): Node(OPNODE) {operation = nothing;};
    OperationNode(operName name, std::vector<Node*> kids);
    OperationNode(operName name, std::string vname): operation(name), varname(vname), Node(OPNODE) {};
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
    std::unordered_map<std::string, Node*> varSt;
    std::unordered_map<std::string, bool> isCo;
public:
    varType getVarType() {return vType;}

    varOperName getVarOpName() {return vopType;}

    std::string getVarName() {return varName;}

    int execute() override;   

    void print(std::ostringstream& strm) override;

    //default constructor
    VariableOperationNode(): OperationNode(), vType(ABSTRACT), vopType(varnothing) {};  
    //constructor for scalar
    VariableOperationNode(varType vType, varOperName vopName, std::string name, Node* data);
    //constructor for vector 
    VariableOperationNode(varType vType, varOperName vopName, std::string name, ContainerVectorNode* data): vType(vType), vopType(vopName), varName(name), vectorData(data), varSt(varStorage), isCo(isConst) {};
    //constructor for matrix
    VariableOperationNode(varType vType, varOperName vopName, std::string name, ContainerMatrixNode* data): vType(vType), vopType(vopName), varName(name), matrixData(data), varSt(varStorage), isCo(isConst) {};
    //constructor for scalar upd
    VariableOperationNode(varType vType, varOperName vopName, std::string name, Node* data, std::unordered_map<std::string, Node*> raz, std::unordered_map<std::string, bool> dva): vType(vType), vopType(vopName), varName(name), varSt(raz), isCo(dva), scalarData(data) {};
    //constructor for vector upd
    VariableOperationNode(varType vType, varOperName vopName, std::string name, ContainerVectorNode* data, std::unordered_map<std::string, Node*> raz, std::unordered_map<std::string, bool> dva): vType(vType), vopType(vopName), varName(name), vectorData(data), varSt(raz), isCo(dva) {};
    //constructor for matrix upd
    VariableOperationNode(varType vType, varOperName vopName, std::string name, ContainerMatrixNode* data, std::unordered_map<std::string, Node*> raz, std::unordered_map<std::string, bool> dva): vType(vType), vopType(vopName), varName(name), matrixData(data), varSt(raz), isCo(dva) {};
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