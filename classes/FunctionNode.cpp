#include "FunctionNode.h"

Interpreter::args_func::args_func(Interpreter::Node* dec): Interpreter::Node(Interpreter::ARGFUNCNODE) {
    addByNode(dec);
}

Interpreter::args_func::args_func(Interpreter::varType vt, std::string name): Interpreter::Node(Interpreter::ARGFUNCNODE) {
    addByVTypeandName(vt, name);
}

void Interpreter::args_func::addByNode(Interpreter::Node* dec) {
    auto declar = dynamic_cast<VariableOperationNode*>(dec);
    auto varType = declar->getVarType();
    auto opName = declar->getVarOpName();
    auto varName = declar->getVarName();

    if (varType == Interpreter::INT || varType == Interpreter::CINT || varType == Interpreter::BOOL || varType == Interpreter::CBOOL) {
        auto tmp = new Interpreter::VariableOperationNode(varType, declare, varName, varStorage[varName], localStorage, localisConst);
        tmp->execute();
    }
    else if (varType == Interpreter::VINT || varType == Interpreter::CVINT || varType == Interpreter::VBOOL || varType == Interpreter::CVBOOL) {
        auto tmp = new Interpreter::VariableOperationNode(varType, declare, varName, dynamic_cast<Interpreter::ContainerVectorNode*>(varStorage[varName]), localStorage, localisConst);
        tmp->execute();
    }
    else if (varType == Interpreter::MINT || varType == Interpreter::CMINT || varType == Interpreter::MBOOL || varType == Interpreter::CMBOOL) {
        auto tmp = new Interpreter::VariableOperationNode(varType, declare, varName, dynamic_cast<Interpreter::ContainerMatrixNode*>(varStorage[varName]), localStorage, localisConst);
        tmp->execute();
    }

    types.push_back(varType);
    names.push_back(varName);
    varStorage.erase(declar->getVarName());
}
        
void Interpreter::args_func::addByVTypeandName(Interpreter::varType vt, std::string name) {
    if (vt == INT || vt == CINT) {
        auto plug = new Interpreter::IntegerNode();
        localStorage.insert_or_assign(name, plug);
        tmpStorage.insert_or_assign(name, plug);
        // auto tmp = new Interpreter::VariableOperationNode(vt, declare, name, plug, localStorage, localisConst);
        // tmp->execute();
    }
    else if (vt == BOOL || vt == CBOOL) {
        auto plug = new Interpreter::BoolNode();
        localStorage.insert_or_assign(name, plug);
        tmpStorage.insert_or_assign(name, plug);
        // auto tmp = new Interpreter::VariableOperationNode(vt, declare, name, plug, localStorage, localisConst);
        // tmp->execute();
    }
    else if (vt == VINT || vt == CVINT || vt == VBOOL || vt == CVBOOL) {
        auto plug = new Interpreter::AbstractVectorNode();
        localStorage.insert_or_assign(name, plug);
        tmpStorage.insert_or_assign(name, plug);
        // auto tmp = new Interpreter::VariableOperationNode(vt, declare, name, dynamic_cast<Interpreter::ContainerVectorNode*>(plug), localStorage, localisConst);
        // tmp->execute();
    }
    else if (vt == MBOOL || vt == CMBOOL || vt == MINT || vt == CMINT) {
        auto plug = new Interpreter::AbstractMatrixNode();
        localStorage.insert_or_assign(name, plug);
        tmpStorage.insert_or_assign(name, plug);
        // auto tmp = new Interpreter::VariableOperationNode(vt, declare, name, dynamic_cast<Interpreter::ContainerMatrixNode*>(plug), localStorage, localisConst);
        // tmp->execute();
    }
    names.push_back(name);
    types.push_back(vt);
}

Interpreter::func_descript::func_descript(std::unordered_map<std::string, Node*> raz, std::unordered_map<std::string, bool> dva, std::vector<std::pair<varType, Node*>> tri, std::vector<std::string> rvn, Node* toExec, std::string name, std::vector<varType> types, std::vector<std::string> nnames):
            Interpreter::Node(FUNCNODE), localStorage(raz), localisConst(dva), container(tri), retVarNames(rvn), toExec(toExec), funcName(name), types(types), argnames(nnames) {
    
    for (size_t i = 0; i < retVarNames.size(); i++) {
        if (container[i].first == Interpreter::INT) {
            localStorage.insert_or_assign(retVarNames[i], container[i].second);
        }
        else if (container[i].first == Interpreter::BOOL) {
            localStorage.insert_or_assign(retVarNames[i], container[i].second);
        }
        else if (container[i].first == Interpreter::VINT) {
            localStorage.insert_or_assign(retVarNames[i], container[i].second);
        }
        else if (container[i].first == Interpreter::VBOOL) {
            localStorage.insert_or_assign(retVarNames[i], container[i].second);
        }
        else if (container[i].first == Interpreter::MINT) {
            localStorage.insert_or_assign(retVarNames[i], container[i].second);
        }
        else if (container[i].first == Interpreter::MBOOL) {
            localStorage.insert_or_assign(retVarNames[i], container[i].second);
        }
    }
}

void Interpreter::func_descript::run() {
    std::unordered_map<std::string, Node*> originalStorage = Interpreter::varStorage;
    std::unordered_map<std::string, bool> originalIsConst = Interpreter::isConst;

    Interpreter::varStorage = this->localStorage;
    Interpreter::isConst = this->localisConst;

    toExec->execute();

    Interpreter::varStorage = originalStorage;
    Interpreter::isConst = originalIsConst; 
}

int Interpreter::callfunc::execute() {
    if (Interpreter::varStorage.find(fname) == Interpreter::varStorage.end()) throw "No function with this name";
    auto function = dynamic_cast<Interpreter::func_descript*>(Interpreter::varStorage.find(fname)->second);

    if (function->types.size() != args.size()) throw "Incorrect amount of arguments";

    for (size_t i = 0; i < function->types.size(); i++) {
        switch (function->types[i])
        {
        case Interpreter::INT: case Interpreter::CINT: case Interpreter::BOOL: case Interpreter::CBOOL: {
            auto tmp = new VariableOperationNode(function->types[i], declare, function->argnames[i], args[i].second, function->localStorage, function->localisConst);
            tmp->execute();
            break;
        }
        case Interpreter::VINT: case Interpreter::CVINT: case Interpreter::VBOOL: case Interpreter::CVBOOL: {
            auto tmp = new VariableOperationNode(function->types[i], declare, function->argnames[i], dynamic_cast<Interpreter::ContainerVectorNode*>(args[i].second), function->localStorage, function->localisConst);
            tmp->execute();
            break;
        }
        case Interpreter::MINT: case Interpreter::CMINT: case Interpreter::MBOOL: case Interpreter::CMBOOL: {
            auto tmp = new VariableOperationNode(function->types[i], declare, function->argnames[i], dynamic_cast<Interpreter::ContainerMatrixNode*>(args[i].second), function->localStorage, function->localisConst);
            tmp->execute();
            break;
        }
        default:
            break;
        }
    }

    std::cout << function->localStorage["a"]->execute() << std::endl;
    std::cout << function->localStorage["b"]->execute() << std::endl;
    std::cout << function->localStorage["i"]->execute() << std::endl;
    std::cout << function->localStorage["j"]->execute() << std::endl;

    function->run();
    return 0;
}