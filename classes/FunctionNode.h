#pragma once
#include "IntegerNode.h"
#include "BoolNode.h"
#include "OperationNode.h"

namespace Interpreter {

class return_func: public Node {
    public:
        std::vector<std::pair<varType, std::string>> rets;

        void print(std::ostringstream& strm) override {}; 
        int execute() override {return 0;}

        return_func(): Node(RETFUNCNODE) {};
        return_func(std::pair<varType, std::string> p): Node(RETFUNCNODE) {rets.push_back(p);};
        ~return_func() {};
};

class args_func: public Node {
    public:
        std::vector<std::pair<varType, std::string>> args;
        std::unordered_map<std::string, Node*> def_args;
        bool isClosed;

        void print(std::ostringstream& strm) override {};
        int execute() override {return 0;}

        void addNonDefault(varType vt, std::string name);
        void addDefault(varType vt, std::string name, Node* dec);

        args_func(): Node(ARGFUNCNODE), isClosed(true) {};
        args_func(varType vt, std::string name, Node* dec): Node(ARGFUNCNODE), isClosed(false) {addDefault(vt, name, dec);};
        args_func(varType vt, std::string name): Node(ARGFUNCNODE), isClosed(false) {addNonDefault(vt, name);};
        ~args_func() {}
};

class func_descript: public Node {
    public:
        std::vector<std::pair<varType, std::string>> rets;  //type and name of variables which are returning
        std::vector<std::pair<varType, std::string>> args;  //type and name of variables in parameters
        std::unordered_map<std::string, Node*> def_args;    //map containing default values of certain variables
        std::string fname;  //name of the function

        std::vector<Node*> defaultAssigns;      //vector of VariableOperationNode's, assigning launches via init() function

        std::unordered_map<std::string, Node*> localStorage;    //local visibility area for variables
        std::unordered_map<std::string, bool> localIsConst;     //local visibility area for understanding constant variable or not

        Node* toExec;   //statements to do are stored here

        void print(std::ostringstream& strm) override {};

        int execute() override {return 0;};

        void init();    //assign default values

        void run();     //run function

        func_descript(): Node(FUNCNODE) {};
        func_descript(std::vector<std::pair<varType, std::string>> rets, std::vector<std::pair<varType, std::string>> args,
                                                                            std::unordered_map<std::string, Node*> def_args, std::string fname);
        
        func_descript(func_descript* ptr);  //self-made copy constructor
        
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
        std::vector<std::pair<varType, std::string>> rets;
        std::vector<std::pair<dataType, Node*>> args;
        func_descript* function;
        std::string fname;

        void print(std::ostringstream& strm) override {};

        int execute() override;

        callfunc(): Node(CALLFUNCNODE) {};
        callfunc(std::string fname, std::vector<std::pair<varType, std::string>> rets, std::vector<std::pair<dataType, Node*>> args);
        ~callfunc() {};
};

}