#pragma once
#include "IntegerNode.h"
#include "BoolNode.h"
#include "OperationNode.h"

namespace Interpreter {

class return_funcNode: public Node {
    public:
        std::vector<std::pair<varType, Node*>> container;
        std::vector<std::string> retVarNames;

        void print(std::ostringstream& strm) override {}; 
        int execute() override {return 0;}

        return_funcNode(): Node(RETFUNCNODE) {};
        return_funcNode(std::pair<varType, Node*> p): Node(RETFUNCNODE) {container.push_back(p);};
        ~return_funcNode() {};
};

class args_func: public Node {
    public:
        std::unordered_map<std::string, Node*> localStorage;
        std::unordered_map<std::string, bool> localisConst;

        std::vector<varType> types;
        std::vector<std::string> names;

        void print(std::ostringstream& strm) override {};
        int execute() override {return 0;}

        void addByNode(Node* dec);
        void addByVTypeandName(varType vt, std::string name);

        args_func(): Node(ARGFUNCNODE) {};
        args_func(Node* dec);
        args_func(varType vt, std::string name);
        ~args_func() {}
};

class func_descript: public Node {
    public:
        std::unordered_map<std::string, Node*> localStorage;
        std::unordered_map<std::string, bool> localisConst;
        std::vector<std::pair<varType, Node*>> container;
        std::vector<std::string> retVarNames;
        std::vector<varType> types;
        std::vector<std::string> argnames;

        std::string funcName;

        Node* toExec;

        void print(std::ostringstream& strm) override {};

        int execute() override {return 0;};

        void run();

        func_descript(): Node(FUNCNODE) {};
        func_descript(std::unordered_map<std::string, Node*> raz, std::unordered_map<std::string, bool> dva, std::vector<std::pair<varType, Node*>> tri, std::vector<std::string> rvn, Node* toExec, std::string name, std::vector<varType> types, std::vector<std::string> nnames);
        ~func_descript() {};
};

class callfunc_args: public Node {
    public:
        std::vector<std::pair<dataType, Node*>> args;

        void addArg(dataType t, Node* src) {args.push_back({t, src});};

        void print(std::ostringstream& strm) override {};

        int execute() override {return 0;};

        callfunc_args(): Node(CALLFUNCARGSNODE) {};
        callfunc_args(dataType t, Node* src): Node(CALLFUNCARGSNODE) {addArg(t, src);};
        ~callfunc_args() {};
};

class callfunc: public Node {
    public:
        std::vector<std::pair<dataType, Node*>> args;
        func_descript* function;
        std::string fname;

        void print(std::ostringstream& strm) override {};

        int execute() override;

        callfunc(): Node(CALLFUNCNODE) {};
        callfunc(std::string fname, std::vector<std::pair<dataType, Node*>> args): fname(fname), args(args), function(nullptr) {};
        ~callfunc() {};
};

}