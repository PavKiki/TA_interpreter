#pragma once
#include <iostream>
#include <sstream>
#include <unordered_map>

namespace Interpreter {

enum nodeType {
    ABSTRACTNODE,   //0
    BOOLNODE,       //1
    INTNODE,        //2
    OPNODE,         //3
    // VARNODE,        //4
    VAROPNODE       //5
};

enum varType {
    ABSTRACT,
    INT,
    CINT,
    VINT,
    MINT,
    CVINT,
    CMINT,
    BOOL,
    CBOOL,
    VBOOL,
    MBOOL,
    CVBOOL,
    CMBOOL
};

class Node {
    public:
        nodeType nType;
        virtual void print(std::ostringstream& strm) = 0;
        virtual int execute() = 0;
        
        Node();
        Node(nodeType ttype);
        ~Node() {};
};

// class VariableNode : public Node {
//     private:
//         std::string name;
//     public:
//         varType vType;
//         std::string getName() {return name;};

//         VariableNode(): Node() {};
//         VariableNode(varType vtype, std::string name): Node(VARNODE), vType(vtype), name(name) {};
//         ~VariableNode() {};
// };

extern std::unordered_map<std::string, Node*> varStorage;
extern std::ostringstream out;

// void variableScalarDistribution(VariableNode*, varType, std::string, Node*);

}