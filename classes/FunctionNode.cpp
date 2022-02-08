#include "FunctionNode.h"

void Interpreter::args_func::addNonDefault(Interpreter::varType vt, std::string name) {
    args.push_back({vt, name});
}

void Interpreter::args_func::addDefault(Interpreter::varType vt, std::string name, Interpreter::Node* dec) {
    args.push_back({vt, name});
    def_args.insert_or_assign(name, dec);
}

Interpreter::func_descript::func_descript(std::vector<std::pair<varType, std::string>> rets, std::vector<std::pair<varType, std::string>> args,
            std::unordered_map<std::string, Node*> def_args, std::string fname) {
    this->rets = rets;
    this->args = args;
    this->def_args = def_args;
    this->fname = fname;

    for (auto& retVariable: rets) {
        switch (retVariable.first)
        {
        case Interpreter::INT:{
            auto plug = new Interpreter::IntegerNode();
            this->localStorage.insert_or_assign(retVariable.second, plug);
            this->localIsConst.insert_or_assign(retVariable.second, false);
            break;
        }
        case Interpreter::CINT: {
            auto plug = new Interpreter::IntegerNode();
            this->localStorage.insert_or_assign(retVariable.second, plug);
            this->localIsConst.insert_or_assign(retVariable.second, true);
            break;
        }
        case Interpreter::BOOL:{
            auto plug = new Interpreter::BoolNode();
            this->localStorage.insert_or_assign(retVariable.second, plug);
            this->localIsConst.insert_or_assign(retVariable.second, false);
            break;
        }
        case Interpreter::CBOOL: {
            auto plug = new Interpreter::BoolNode();
            this->localStorage.insert_or_assign(retVariable.second, plug);
            this->localIsConst.insert_or_assign(retVariable.second, true);
            break;
        }
        case Interpreter::VINT:{
            auto plug = new Interpreter::IntegerVectorNode();
            this->localStorage.insert_or_assign(retVariable.second, plug);
            this->localIsConst.insert_or_assign(retVariable.second, false);
            break;
        }
        case Interpreter::VBOOL: {
            auto plug = new Interpreter::BoolVectorNode();
            this->localStorage.insert_or_assign(retVariable.second, plug);
            this->localIsConst.insert_or_assign(retVariable.second, false);
            break;
        }
        case Interpreter::CVINT:{
            auto plug = new Interpreter::IntegerVectorNode();
            this->localStorage.insert_or_assign(retVariable.second, plug);
            this->localIsConst.insert_or_assign(retVariable.second, true);
            break;
        }
        case Interpreter::CVBOOL: {
            auto plug = new Interpreter::BoolVectorNode();
            this->localStorage.insert_or_assign(retVariable.second, plug);
            this->localIsConst.insert_or_assign(retVariable.second, true);
            break;
        }
        case Interpreter::MINT:{
            auto plug = new Interpreter::IntegerMatrixNode();
            this->localStorage.insert_or_assign(retVariable.second, plug);
            this->localIsConst.insert_or_assign(retVariable.second, false);
            break;
        }
        case Interpreter::MBOOL: {
            auto plug = new Interpreter::BoolMatrixNode();
            this->localStorage.insert_or_assign(retVariable.second, plug);
            this->localIsConst.insert_or_assign(retVariable.second, false);
            break;
        }
        case Interpreter::CMINT:{
            auto plug = new Interpreter::IntegerMatrixNode();
            this->localStorage.insert_or_assign(retVariable.second, plug);
            this->localIsConst.insert_or_assign(retVariable.second, true);
            break;
        }
        case Interpreter::CMBOOL: {
            auto plug = new Interpreter::BoolMatrixNode();
            this->localStorage.insert_or_assign(retVariable.second, plug);
            this->localIsConst.insert_or_assign(retVariable.second, true);
            break;
        }
        
        default:
            break;
        }
    }
    for (auto& argVariable: args) {
        switch (argVariable.first)
        {
        case Interpreter::INT:{
            auto plug = new Interpreter::IntegerNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, false);
            if (localStorage.find(argVariable.second) != localStorage.end()) {
                auto tmp = new VariableOperationNode(Interpreter::INT, declare, argVariable.second, localStorage[argVariable.second], this->localStorage, this->localIsConst);
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::CINT: {
            auto plug = new Interpreter::IntegerNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, true);
            if (localStorage.find(argVariable.second) != localStorage.end()) {
                auto tmp = new VariableOperationNode(Interpreter::CINT, declare, argVariable.second, localStorage[argVariable.second], this->localStorage, this->localIsConst);
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::BOOL:{
            auto plug = new Interpreter::BoolNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, false);
            if (localStorage.find(argVariable.second) != localStorage.end()) {
                auto tmp = new VariableOperationNode(Interpreter::BOOL, declare, argVariable.second, localStorage[argVariable.second], this->localStorage, this->localIsConst);
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::CBOOL: {
            auto plug = new Interpreter::BoolNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, true);
            if (localStorage.find(argVariable.second) != localStorage.end()) {
                auto tmp = new VariableOperationNode(Interpreter::CBOOL, declare, argVariable.second, localStorage[argVariable.second], this->localStorage, this->localIsConst);
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::VINT:{
            auto plug = new Interpreter::IntegerVectorNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, false);
            if (localStorage.find(argVariable.second) != localStorage.end()) {
                auto tmp = new VariableOperationNode(Interpreter::VINT, declare, argVariable.second, dynamic_cast<Interpreter::ContainerVectorNode*>(localStorage[argVariable.second]), this->localStorage, this->localIsConst);
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::VBOOL: {
            auto plug = new Interpreter::BoolVectorNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, false);
            if (localStorage.find(argVariable.second) != localStorage.end()) {
                auto tmp = new VariableOperationNode(Interpreter::VBOOL, declare, argVariable.second, dynamic_cast<Interpreter::ContainerVectorNode*>(localStorage[argVariable.second]), this->localStorage, this->localIsConst);
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::CVINT:{
            auto plug = new Interpreter::IntegerVectorNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, true);
            if (localStorage.find(argVariable.second) != localStorage.end()) {
                auto tmp = new VariableOperationNode(Interpreter::CVINT, declare, argVariable.second, dynamic_cast<Interpreter::ContainerVectorNode*>(localStorage[argVariable.second]), this->localStorage, this->localIsConst);
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::CVBOOL: {
            auto plug = new Interpreter::BoolVectorNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, true);
            if (localStorage.find(argVariable.second) != localStorage.end()) {
                auto tmp = new VariableOperationNode(Interpreter::CVBOOL, declare, argVariable.second, dynamic_cast<Interpreter::ContainerVectorNode*>(localStorage[argVariable.second]), this->localStorage, this->localIsConst);
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::MINT:{
            auto plug = new Interpreter::IntegerMatrixNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, false);
            if (localStorage.find(argVariable.second) != localStorage.end()) {
                auto tmp = new VariableOperationNode(Interpreter::MINT, declare, argVariable.second, dynamic_cast<Interpreter::ContainerMatrixNode*>(localStorage[argVariable.second]), this->localStorage, this->localIsConst);
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::MBOOL: {
            auto plug = new Interpreter::BoolMatrixNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, false);
            if (localStorage.find(argVariable.second) != localStorage.end()) {
                auto tmp = new VariableOperationNode(Interpreter::MBOOL, declare, argVariable.second, dynamic_cast<Interpreter::ContainerMatrixNode*>(localStorage[argVariable.second]), this->localStorage, this->localIsConst);
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::CMINT:{
            auto plug = new Interpreter::IntegerMatrixNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, true);
            if (localStorage.find(argVariable.second) != localStorage.end()) {
                auto tmp = new VariableOperationNode(Interpreter::CMINT, declare, argVariable.second, dynamic_cast<Interpreter::ContainerMatrixNode*>(localStorage[argVariable.second]), this->localStorage, this->localIsConst);
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::CMBOOL: {
            auto plug = new Interpreter::BoolMatrixNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, true);
            if (localStorage.find(argVariable.second) != localStorage.end()) {
                auto tmp = new VariableOperationNode(Interpreter::CMBOOL, declare, argVariable.second, dynamic_cast<Interpreter::ContainerMatrixNode*>(localStorage[argVariable.second]), this->localStorage, this->localIsConst);
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        
        default:
            break;
        }
    }


}

void Interpreter::func_descript::init() {
    for (auto& assign: defaultAssigns) {
        assign->execute();
    }
}

void Interpreter::func_descript::run() {
    
    // std::unordered_map<std::string, Node*> originalStorage = Interpreter::varStorage;
    // std::unordered_map<std::string, bool> originalIsConst = Interpreter::isConst;

    // Interpreter::varStorage = this->localStorage;
    // Interpreter::isConst = this->localIsConst;

    // toExec->execute();

    // Interpreter::varStorage = originalStorage;
    // Interpreter::isConst = originalIsConst; 
}

int Interpreter::callfunc::execute() {
    // if (Interpreter::varStorage.find(fname) == Interpreter::varStorage.end()) throw "No function with this name";
    // auto function = dynamic_cast<Interpreter::func_descript*>(Interpreter::varStorage.find(fname)->second);

    // if (function->types.size() != args.size()) throw "Incorrect amount of arguments";

    // for (size_t i = 0; i < function->types.size(); i++) {
    //     switch (function->types[i])
    //     {
    //     case Interpreter::INT: case Interpreter::CINT: case Interpreter::BOOL: case Interpreter::CBOOL: {
    //         auto tmp = new VariableOperationNode(function->types[i], declare, function->argnames[i], args[i].second, function->localStorage, function->localisConst);
    //         tmp->execute();
    //         break;
    //     }
    //     case Interpreter::VINT: case Interpreter::CVINT: case Interpreter::VBOOL: case Interpreter::CVBOOL: {
    //         auto tmp = new VariableOperationNode(function->types[i], declare, function->argnames[i], dynamic_cast<Interpreter::ContainerVectorNode*>(args[i].second), function->localStorage, function->localisConst);
    //         tmp->execute();
    //         break;
    //     }
    //     case Interpreter::MINT: case Interpreter::CMINT: case Interpreter::MBOOL: case Interpreter::CMBOOL: {
    //         auto tmp = new VariableOperationNode(function->types[i], declare, function->argnames[i], dynamic_cast<Interpreter::ContainerMatrixNode*>(args[i].second), function->localStorage, function->localisConst);
    //         tmp->execute();
    //         break;
    //     }
    //     default:
    //         break;
    //     }
    // }

    // function->run();
    return 0;
}