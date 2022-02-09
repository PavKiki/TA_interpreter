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
    this->nType = Interpreter::FUNCNODE;

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
            if (def_args.find(argVariable.second) != def_args.end()) {
                auto tmp = new VariableOperationNode(Interpreter::INT, declare, argVariable.second, def_args[argVariable.second]);
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::CINT: {
            auto plug = new Interpreter::IntegerNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, true);
            if (def_args.find(argVariable.second) != def_args.end()) {
                auto tmp = new VariableOperationNode(Interpreter::CINT, declare, argVariable.second, def_args[argVariable.second]);
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::BOOL:{
            auto plug = new Interpreter::BoolNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, false);
            if (def_args.find(argVariable.second) != def_args.end()) {
                auto tmp = new VariableOperationNode(Interpreter::BOOL, declare, argVariable.second, def_args[argVariable.second]);
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::CBOOL: {
            auto plug = new Interpreter::BoolNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, true);
            if (def_args.find(argVariable.second) != def_args.end()) {
                auto tmp = new VariableOperationNode(Interpreter::CBOOL, declare, argVariable.second, def_args[argVariable.second]);
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::VINT:{
            auto plug = new Interpreter::IntegerVectorNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, false);
            if (def_args.find(argVariable.second) != def_args.end()) {
                auto tmp = new VariableOperationNode(Interpreter::VINT, declare, argVariable.second, dynamic_cast<Interpreter::ContainerVectorNode*>(def_args[argVariable.second]));
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::VBOOL: {
            auto plug = new Interpreter::BoolVectorNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, false);
            if (def_args.find(argVariable.second) != def_args.end()) {
                auto tmp = new VariableOperationNode(Interpreter::VBOOL, declare, argVariable.second, dynamic_cast<Interpreter::ContainerVectorNode*>(def_args[argVariable.second]));
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::CVINT:{
            auto plug = new Interpreter::IntegerVectorNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, true);
            if (def_args.find(argVariable.second) != def_args.end()) {
                auto tmp = new VariableOperationNode(Interpreter::CVINT, declare, argVariable.second, dynamic_cast<Interpreter::ContainerVectorNode*>(def_args[argVariable.second]));
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::CVBOOL: {
            auto plug = new Interpreter::BoolVectorNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, true);
            if (def_args.find(argVariable.second) != def_args.end()) {
                auto tmp = new VariableOperationNode(Interpreter::CVBOOL, declare, argVariable.second, dynamic_cast<Interpreter::ContainerVectorNode*>(def_args[argVariable.second]));
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::MINT:{
            auto plug = new Interpreter::IntegerMatrixNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, false);
            if (def_args.find(argVariable.second) != def_args.end()) {
                auto tmp = new VariableOperationNode(Interpreter::MINT, declare, argVariable.second, dynamic_cast<Interpreter::ContainerMatrixNode*>(def_args[argVariable.second]));
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::MBOOL: {
            auto plug = new Interpreter::BoolMatrixNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, false);
            if (def_args.find(argVariable.second) != def_args.end()) {
                auto tmp = new VariableOperationNode(Interpreter::MBOOL, declare, argVariable.second, dynamic_cast<Interpreter::ContainerMatrixNode*>(def_args[argVariable.second]));
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::CMINT:{
            auto plug = new Interpreter::IntegerMatrixNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, true);
            if (def_args.find(argVariable.second) != def_args.end()) {
                auto tmp = new VariableOperationNode(Interpreter::CMINT, declare, argVariable.second, dynamic_cast<Interpreter::ContainerMatrixNode*>(def_args[argVariable.second]));
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        case Interpreter::CMBOOL: {
            auto plug = new Interpreter::BoolMatrixNode();
            this->localStorage.insert_or_assign(argVariable.second, plug);
            this->localIsConst.insert_or_assign(argVariable.second, true);
            if (def_args.find(argVariable.second) != def_args.end()) {
                auto tmp = new VariableOperationNode(Interpreter::CMBOOL, declare, argVariable.second, dynamic_cast<Interpreter::ContainerMatrixNode*>(def_args[argVariable.second]));
                defaultAssigns.push_back(tmp);
            }
            break;
        }
        
        default:
            break;
        }
    }

    Interpreter::tmpStorage = &Interpreter::varStorage;
    Interpreter::tmpIsConst = &Interpreter::isConst;

    Interpreter::varStorage = *(&(this->localStorage));
    Interpreter::isConst = *(&(this->localIsConst));
}

Interpreter::func_descript::func_descript(func_descript* ptr) {
    this->rets = ptr->rets;
    this->args = ptr->args;
    this->def_args = ptr->def_args;
    this->fname = ptr->fname;
    this->defaultAssigns = ptr->defaultAssigns;
    this->localIsConst = ptr->localIsConst;
    this->toExec = ptr->toExec;

    for (auto it = ptr->localStorage.begin(); it != ptr->localStorage.end(); it++) {
        switch (it->second->nType)
        {
        case Interpreter::INTNODE: {
            auto tmp = dynamic_cast<Interpreter::IntegerNode*>(it->second)->copy();
            this->localStorage.insert_or_assign(it->first, tmp);
            break;
        }
        case Interpreter::BOOLNODE: {
            auto tmp = dynamic_cast<Interpreter::BoolNode*>(it->second)->copy();
            this->localStorage.insert_or_assign(it->first, tmp);
            break;
        }
        case Interpreter::INTVECNODE: case Interpreter::BOOLVECNODE: {
            auto tmp = dynamic_cast<Interpreter::AbstractVectorNode*>(it->second)->copy();
            this->localStorage.insert_or_assign(it->first, tmp);
            break;
        }
        case Interpreter::INTMATNODE: case Interpreter::BOOLMATNODE: {
            auto tmp = dynamic_cast<Interpreter::AbstractMatrixNode*>(it->second)->copy();
            this->localStorage.insert_or_assign(it->first, tmp);
            break;
        }
        default:
            throw "Incorrect variable type found while copying function descriptor!";
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
    
    std::unordered_map<std::string, Node*>* originalStorage = &Interpreter::varStorage;
    std::unordered_map<std::string, bool>* originalIsConst = &Interpreter::isConst;

    Interpreter::varStorage = this->localStorage;
    Interpreter::isConst = this->localIsConst;

    init();
    toExec->execute();

    Interpreter::varStorage = *originalStorage;
    Interpreter::isConst = *originalIsConst; 
}

Interpreter::callfunc::callfunc(std::string fname, std::vector<std::pair<varType, std::string>> rets, std::vector<std::pair<dataType, Node*>> args): Node(CALLFUNCNODE), fname(fname), rets(rets), args(args) {
    this->function = new Interpreter::func_descript(dynamic_cast<Interpreter::func_descript*>(Interpreter::funcStorage[fname]));

    if (rets.size() != function->rets.size()) throw "Invalid amount of return values!";
    if (args.size() != function->args.size()) throw "Invalid amount of parameters!";

    for (size_t i = 0; i < rets.size(); i++) {
        if (rets[i].first != function->rets[i].first) throw "Type mismatch in return values!";
    }
    //passed parameter values assigns to function
    for (size_t i = 0; i < args.size(); i++) {
        if (args[i].first == expR) {
            auto tmp = new Interpreter::VariableOperationNode(function->args[i].first, assign, function->args[i].second, args[i].second);
            function->defaultAssigns.push_back(tmp);
            //#DELETE_LATER
            std::ostringstream s;
            args[i].second->print(s);
            std::cout << s.str();
        }
        else if (args[i].first == vectoR) {
            auto tmp = new Interpreter::VariableOperationNode(function->args[i].first, assign, function->args[i].second, dynamic_cast<Interpreter::ContainerVectorNode*>(args[i].second));
            function->defaultAssigns.push_back(tmp);
        }
        else if (args[i].first == matriX) {
            auto tmp = new Interpreter::VariableOperationNode(function->args[i].first, assign, function->args[i].second, dynamic_cast<Interpreter::ContainerMatrixNode*>(args[i].second));
            function->defaultAssigns.push_back(tmp);
        }
        else if (args[i].first == defaulT) {
            continue;
        }
    }
    //for each return value create a plug in global storage and pointer to this plug assigns with return value inside the function
    for (size_t i = 0; i < rets.size(); i++) {
        switch (rets[i].first)
        {
        case Interpreter::INT:{
            auto plug = new Interpreter::IntegerNode();
            Interpreter::varStorage.insert_or_assign(rets[i].second, plug);
            Interpreter::isConst.insert_or_assign(rets[i].second, false);
            break;
        }
        case Interpreter::CINT: {
            auto plug = new Interpreter::IntegerNode();
            Interpreter::varStorage.insert_or_assign(rets[i].second, plug);
            Interpreter::isConst.insert_or_assign(rets[i].second, true);
            break;
        }
        case Interpreter::BOOL:{
            auto plug = new Interpreter::BoolNode();
            Interpreter::varStorage.insert_or_assign(rets[i].second, plug);
            Interpreter::isConst.insert_or_assign(rets[i].second, false);
            break;
        }
        case Interpreter::CBOOL: {
            auto plug = new Interpreter::BoolNode();
            Interpreter::varStorage.insert_or_assign(rets[i].second, plug);
            Interpreter::isConst.insert_or_assign(rets[i].second, true);
            break;
        }
        case Interpreter::VINT:{
            auto plug = new Interpreter::IntegerVectorNode();
            Interpreter::varStorage.insert_or_assign(rets[i].second, plug);
            Interpreter::isConst.insert_or_assign(rets[i].second, false);
            break;
        }
        case Interpreter::VBOOL: {
            auto plug = new Interpreter::BoolVectorNode();
            Interpreter::varStorage.insert_or_assign(rets[i].second, plug);
            Interpreter::isConst.insert_or_assign(rets[i].second, false);
            break;
        }
        case Interpreter::CVINT:{
            auto plug = new Interpreter::IntegerVectorNode();
            Interpreter::varStorage.insert_or_assign(rets[i].second, plug);
            Interpreter::isConst.insert_or_assign(rets[i].second, true);
            break;
        }
        case Interpreter::CVBOOL: {
            auto plug = new Interpreter::BoolVectorNode();
            Interpreter::varStorage.insert_or_assign(rets[i].second, plug);
            Interpreter::isConst.insert_or_assign(rets[i].second, true);
            break;
        }
        case Interpreter::MINT:{
            auto plug = new Interpreter::IntegerMatrixNode();
            Interpreter::varStorage.insert_or_assign(rets[i].second, plug);
            Interpreter::isConst.insert_or_assign(rets[i].second, false);
            break;
        }
        case Interpreter::MBOOL: {
            auto plug = new Interpreter::BoolMatrixNode();
            Interpreter::varStorage.insert_or_assign(rets[i].second, plug);
            Interpreter::isConst.insert_or_assign(rets[i].second, false);
            break;
        }
        case Interpreter::CMINT:{
            auto plug = new Interpreter::IntegerMatrixNode();
            Interpreter::varStorage.insert_or_assign(rets[i].second, plug);
            Interpreter::isConst.insert_or_assign(rets[i].second, true);
            break;
        }
        case Interpreter::CMBOOL: {
            auto plug = new Interpreter::BoolMatrixNode();
            Interpreter::varStorage.insert_or_assign(rets[i].second, plug);
            Interpreter::isConst.insert_or_assign(rets[i].second, true);
            break;
        }
        
        default:
            break;
        }
        function->localStorage[function->rets[i].second] = Interpreter::varStorage[rets[i].second];
    }
};


int Interpreter::callfunc::execute() {
    function->run();
    return 0;
}