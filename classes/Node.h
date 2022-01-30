#pragma once
#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>

namespace Interpreter {

enum nodeType {
    ABSTRACTNODE,       //0
    BOOLNODE,           //1
    INTNODE,            //2
    OPNODE,             //3
    VAROPNODE,          //4
    CONVECNODE,         //5
    ABSTRACTVECNODE,    //6
    INTVECNODE,         //7
    BOOLVECNODE         //8
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

class ContainerVectorNode: public Node {
private:
    std::vector<Node*> data;
    size_t x;
public:

    int execute() override {return 0;};

    void print(std::ostringstream& strm) override {};

    void addData(Node* d) {data.push_back(d); x++;};

    void getVector(std::vector<Node*>&);

    size_t getSize() {return x;}

    ContainerVectorNode(): Node(CONVECNODE), x(0) {};
    ContainerVectorNode(Node* d): Node(CONVECNODE), x(1) {data.push_back(d);};
    ~ContainerVectorNode() {for (auto& tmp: data) std::free(tmp);};
};

class AbstractVectorNode: public Node {
private:
    std::vector<Node*> data;
    size_t size;
public:
    int execute() override {return 0;};
    void print(std::ostringstream& strm) override;

    size_t getSize() {return size;};
    AbstractVectorNode(): Node(ABSTRACTVECNODE), size(0) {};
    AbstractVectorNode(nodeType typ, std::vector<Node*> dat, size_t siz): Node(typ), size(siz) {data = dat;};
    ~AbstractVectorNode() {for (auto& node: data) std::free(node);};
};

extern std::unordered_map<std::string, Node*> varStorage;
extern std::unordered_map<std::string, bool> isConst;
extern std::ostringstream out;

// void variableScalarDistribution(VariableNode*, varType, std::string, Node*);

}