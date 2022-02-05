#pragma once
#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>
#include "Robot.h"

enum mOpType {
    mnothing,
    mmultiply,
    melemmultiply,
    mtransposition,
    mcycshiftright,     
    mcycshiftleft,
    vtransposition,
    MEMexpr,
    MEMvec,
    mveccolumnindex,
    mvecrowindex,
    mmatindex,
    getmat
};

enum vecOpType {
    vnothing,
    velemmultiply,      
    vcycshiftright,     
    vcycshiftleft,
    VEMexpr,
    vvecindex,
    mexprcolumnindex,
    mexprrowindex,
    getvec
};

enum VMOpName {
    vmnothing,
    vexpr,
    vvec,
    mexpr, 
    mexprcolumn,
    mexprrow,
    mvecrow,
    mveccolumn,
    mmat
};

enum dataType {
    vectoR,
    expR,
    matriX
};

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
    BOOLVECNODE,        //8
    CONMATNODE,         //9
    ABSTRACTMATNODE,    //10
    INTMATNODE,         //11
    BOOLMATNODE,        //12
    MATOPNODE,
    VECOPNODE,
    VMVAROPNODE,
    RETFUNCNODE, 
    ARGFUNCNODE,
    FUNCNODE,
    CALLFUNCARGSNODE,
    CALLFUNCNODE
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

    std::vector<ContainerVectorNode*> kids;
    vecOpType vecOperType;
public:

    int execute() override;

    void print(std::ostringstream& strm) override {};

    void addData(Node* d) {data.push_back(d); x++;};

    void getVector(std::vector<Node*>&);


    size_t getSize() {return x;}

    Node*& operator[] (const size_t index) {return data[index];};

    ContainerVectorNode(): Node(CONVECNODE), x(0) {};
    ContainerVectorNode(Node* d): Node(CONVECNODE), x(1), vecOperType(vnothing) {data.push_back(d);};
    ContainerVectorNode(std::vector<Node*> d, size_t x): Node(CONVECNODE), x(x), vecOperType(vnothing) {data = d;};
    ContainerVectorNode(std::vector<ContainerVectorNode*> kids, vecOpType t): x(0), vecOperType(t), kids(kids), Node(VECOPNODE) {}
    ~ContainerVectorNode() {for (auto& tmp: data) std::free(tmp);};
};

class AbstractVectorNode: public Node {
private:
    std::vector<Node*> data;
    size_t size;
public:
    int execute() override {return 0;};
    void print(std::ostringstream& strm) override;
    Node* copy();
    std::vector<Node*>& getData() {return data;};
    size_t getSize() {return size;};
    Node*& getByIndex(const size_t index) {return data[index];};

    void setData(std::vector<Node*> dat) {data = dat; size = dat.size();}

    AbstractVectorNode(): Node(ABSTRACTVECNODE), size(0){};
    AbstractVectorNode(nodeType typ, std::vector<Node*> dat, size_t siz): Node(typ), size(siz) {data = dat;};
    ~AbstractVectorNode() {for (auto& node: data) std::free(node);};
};

class ContainerMatrixNode: public Node {
private:
    std::vector<ContainerVectorNode*> data;
    size_t x;
    size_t y;
    
    std::vector<ContainerMatrixNode*> kids;
    mOpType matOperType;
public:

    int execute() override;

    void print(std::ostringstream& strm) override {};

    void addData(ContainerVectorNode* d);

    void getMatrix(std::vector<ContainerVectorNode*>&);

    size_t getSizeX() {return x;}

    size_t getSizeY() {return y;}

    ContainerVectorNode*& operator[] (const size_t index) {return data[index];};

    ContainerMatrixNode(): Node(CONMATNODE), x(0), y(0), matOperType(mnothing) {};
    ContainerMatrixNode(ContainerVectorNode* d): Node(CONMATNODE), x(1), y(d->getSize()), matOperType(mnothing) {data.push_back(d);};
    ContainerMatrixNode(std::vector<AbstractVectorNode*>& d, size_t xx, size_t yy);
    ContainerMatrixNode(std::vector<ContainerMatrixNode*> kids, mOpType t): x(0), y(0), kids(kids), matOperType(t), Node(MATOPNODE) {};
    ~ContainerMatrixNode() {for (auto& tmp: data) std::free(tmp);};
};

class AbstractMatrixNode: public Node {
private:
    std::vector<AbstractVectorNode*> data;
    size_t x;
    size_t y;
public:
    int execute() override {return 0;}
    void print(std::ostringstream& strm) override;
    Node* copy();
    size_t getSizeX() {return x;};
    size_t getSizeY() {return y;};
    std::vector<AbstractVectorNode*>& getData() {return data;};
    AbstractVectorNode*& getByIndex(const size_t index) {return data[index];};

    void setData(std::vector<AbstractVectorNode*> dat) {data = dat; x = dat.size(); y = dat[0]->getSize();}

    AbstractMatrixNode(): Node(ABSTRACTMATNODE), x(0), y(0) {};
    AbstractMatrixNode(nodeType typ, std::vector<AbstractVectorNode*> dat, size_t X, size_t Y): Node(typ), x(X), y(Y), data(dat) {};
    ~AbstractMatrixNode();
};

extern std::unordered_map<std::string, Node*> varStorage;
extern std::unordered_map<std::string, bool> isConst;
extern std::ostringstream out;

extern std::unordered_map<std::string, Node*> tmpStorage;
extern Robot robot;

}