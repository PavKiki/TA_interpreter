#pragma once
#include <string>
#include "Node.h"

namespace Interpreter {

class BoolNode: public Node{
private:
    bool data;
public:
    bool getData() {return data;};

    void writeData(bool data) {data = data;};

    void print(std::stringstream& strm) override {
        strm << data ? "true" : "false";
    }

    BoolNode(): data(true), Node(BOOLNODE) {};
    BoolNode(std::string dat): Node(BOOLNODE) {data = dat == "true" ? true : false;};
    ~BoolNode() {};
};

}