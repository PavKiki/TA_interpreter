#pragma once
#include <iostream>
#include <sstream>

namespace Interpreter {

enum nodeType {
    ABSTRACTNODE,   //0
    BOOLNODE,       //1
    INTNODE,        //2
    OPNODE          //3
};

class Node {
    public:
        nodeType nType;
        virtual void print(std::stringstream& strm) = 0;
        virtual int getData() = 0;
        
        Node();
        Node(nodeType ttype);
        ~Node() {};
};

}