    #include "OperationNode.h"
    #include "IntegerNode.h"
    #include "BoolNode.h"

    extern std::ostringstream Interpreter::out;

    bool Interpreter::suitForArithm(Interpreter::Node* node) {
        switch (node->nType) {
            case Interpreter::INTNODE:
                return true;

            case Interpreter::OPNODE: {
                operName tmp = dynamic_cast<Interpreter::OperationNode*>(node)->getOperation();
                switch (tmp) {
                    case plus: case minus: case divide: case vintgetexp: case mintgetexp: case uminus:
                        return true;
                    case gscalar: {
                        auto nnode = dynamic_cast<Interpreter::OperationNode*>(node);
                        auto search = Interpreter::varStorage.find(nnode->getVN());
                        if (search->second->nType == Interpreter::INTNODE) return true;
                    }
                    default:
                        return false;
                }
            }

            default:
                return false;
        }
    }

    bool Interpreter::suitForLogic(Interpreter::Node* node) {
        switch (node->nType) {
            case Interpreter::BOOLNODE:
                return true;

            case Interpreter::OPNODE: {
                operName tmp = dynamic_cast<Interpreter::OperationNode*>(node)->getOperation();
                switch (tmp) {
                    case less: case greater: case denial: case conjunction: case vboolgetexp: case mboolgetexp:
                        return true; 
                    case gscalar: {
                        auto nnode = dynamic_cast<Interpreter::OperationNode*>(node);
                        auto search = Interpreter::varStorage.find(nnode->getVN());
                        if (search->second->nType == Interpreter::BOOLNODE) return true;
                    }
                    default:
                        return false;
                }
            }

            default:
                return false;
        }
    }

    void Interpreter::OperationNode::print(std::ostringstream& strm) {
        switch (operation)
        {
        case plus: case minus: case divide: case vintgetexp: case mintgetexp:
            strm << execute() << '\n';
            break;
        case less: case greater: case denial: case conjunction: case vboolgetexp: case mboolgetexp:
            strm << (execute() ? "true" : "false") << '\n';
            break;
        case gscalar: {
            auto search = Interpreter::varStorage.find(varname);
            if (search->second->nType == Interpreter::INTNODE) strm << execute() << '\n';
            else if (search->second->nType == Interpreter::BOOLNODE) strm << (execute() ? "true" : "false") << '\n';
            break;
        }
        default:
            break; 
        }
    }

    int Interpreter::OperationNode::execute() {
        switch (operation)
        {
        case uminus:
            if (!Interpreter::suitForArithm(kids[0])) {
                throw "Semantic error! Wrong types of operands.";
            }
            else {
                int tmp = kids[0]->execute();
                return -tmp;
            }
        case plus:
            if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
                throw "Semantic error! Wrong types of operands.";
            }
            else {
                int tmp = kids[0]->execute() + kids[1]->execute();
                return tmp;
            }

        case minus:
            if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
                throw "Semantic error! Wrong types of operands.";
            }
            else {
                return kids[0]->execute() - kids[1]->execute();
            }

        case divide:
            if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
                throw "Semantic error! Wrong types of operands.";
            }
            else {
                return kids[0]->execute() / kids[1]->execute();
            }
        
        case less:
            if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
                throw "Semantic error! Wrong types of operands.";
            }
            else {
                return (kids[0]->execute() < kids[1]->execute());
            }

        case greater:
            if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
                throw "Semantic error! Wrong types of operands.";
            }
            else {
                return (kids[0]->execute() > kids[1]->execute());
            }

        case denial:
            return !kids[0]->execute();

        case conjunction:
            if (!Interpreter::suitForLogic(kids[0]) || !Interpreter::suitForLogic(kids[1])) {
                throw "Semantic error! Wrong types of operands.";
            }
            else {
                return kids[0]->execute() * kids[1]->execute();
            }

        case newline: {
            for (auto& kid: kids) {
                kid->execute();
            }
            return 0;
        }

        case pprint: {
            if (varname.empty()) {
                kids[0]->print(Interpreter::out);
            }
            else {
                auto search = Interpreter::varStorage.find(varname);
                search->second->print(Interpreter::out);
            }
            return 0;
        }
        
        case vintgetexp: {
            if (!Interpreter::suitForArithm(kids[0])) {
                throw "Incorrect index!";
            }
            auto tmp = static_cast<Interpreter::IntegerVectorNode*>(kids[1]);
            auto index = kids[0]->execute();
            if (index >= tmp->getSize() || index < 0) throw "Incorrect index!";
            return (*tmp)[index].execute();
        }

        case vboolgetexp: {
            if (!Interpreter::suitForArithm(kids[0])) {
                throw "Incorrect index!";
            }
            auto tmp = static_cast<Interpreter::BoolVectorNode*>(kids[1]);
            auto index = kids[0]->execute();
            if (index >= tmp->getSize() || index < 0) throw "Incorrect index!";
            return (*tmp)[index].execute();
        }
        
        case mintgetexp: {
            if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
                throw "Incorrect index!";
            }
            auto tmp = static_cast<Interpreter::IntegerMatrixNode*>(kids[2]);
            auto index1 = kids[0]->execute();
            auto index2 = kids[1]->execute();
            if (index1 >= tmp->getSizeX() || index1 < 0) throw "Incorrect index!";
            if (index2 >= tmp->getSizeY() || index2 < 0) throw "Incorrect index!";
            return (tmp->getByIndex(index1))->getByIndex(index2)->execute();
        }

        case mboolgetexp: {
            if (!Interpreter::suitForArithm(kids[0]) || !Interpreter::suitForArithm(kids[1])) {
                throw "Incorrect index!";
            }
            auto tmp = static_cast<Interpreter::BoolMatrixNode*>(kids[2]);
            auto index1 = kids[0]->execute();
            auto index2 = kids[1]->execute();
            if (index1 >= tmp->getSizeX() || index1 < 0) throw "Incorrect index!";
            if (index2 >= tmp->getSizeY() || index2 < 0) throw "Incorrect index!";
            return (tmp->getByIndex(index1))->getByIndex(index2)->execute();
        }

        case gscalar: {
            auto search = Interpreter::varStorage.find(varname);
            return search->second->execute();
        }

        default:
            throw "Unknown operand type!";
        }
        return -1;
    }

    Interpreter::OperationNode::OperationNode(operName name, std::vector<Interpreter::Node*> kids): Interpreter::Node(Interpreter::OPNODE) {
        operation = name;
        for (auto& kid: kids) this->kids.push_back(kid);
    }

    Interpreter::VariableOperationNode::VariableOperationNode(varType vType, varOperName vopName, std::string name, Interpreter::Node* data): vType(vType), vopType(vopName), varName(name) {
        scalarData = data;
    }

    std::vector<Interpreter::AbstractVectorNode*> Interpreter::getMatrixExprResult(Interpreter::varType type, Interpreter::ContainerMatrixNode*& src) {
        src->execute();
        std::vector<ContainerVectorNode*> srcData;
        src->getMatrix(srcData);

        std::vector<Interpreter::AbstractVectorNode*> dest;
        Interpreter::varType pattern = Interpreter::ABSTRACT;
        Interpreter::nodeType vecPattern = Interpreter::ABSTRACTNODE;
        if (type == Interpreter::MINT || type == Interpreter::CMINT) pattern = Interpreter::VINT;
        else if (type == Interpreter::MBOOL || type == Interpreter::CMBOOL) pattern = Interpreter::VBOOL;
        if (pattern == Interpreter::VINT) vecPattern = Interpreter::INTVECNODE;
        else if (pattern == Interpreter::VBOOL) vecPattern = Interpreter::BOOLVECNODE;
        for (auto& row: srcData) {
            Interpreter::AbstractVectorNode* newNode = new Interpreter::AbstractVectorNode(vecPattern, getVectorExprResult(pattern, row), row->getSize());
            dest.push_back(newNode);
        }
        return dest;
    }

    Interpreter::AbstractVectorNode* Interpreter::VECgetNode_checkType(Interpreter::ContainerVectorNode* vector, Interpreter::nodeType& nType) {
        nType = Interpreter::INTVECNODE;
        try {
            auto newNode = new Interpreter::IntegerVectorNode(getVectorExprResult(Interpreter::VINT, vector), vector->getSize());
            return newNode;
        }
        catch (const char* error) {
            nType = Interpreter::BOOLVECNODE;
            try {
                auto newNode = new Interpreter::BoolVectorNode(getVectorExprResult(Interpreter::VBOOL, vector), vector->getSize());
                return newNode;
            }
            catch (const char* error) {
                nType = Interpreter::ABSTRACTVECNODE;
                return nullptr;
            }
        }
    }

    std::vector<Interpreter::Node*> Interpreter::getVectorExprResult(Interpreter::varType type, Interpreter::ContainerVectorNode*& src) {
        src->execute();
        std::vector<Node*> srcData;
        src->getVector(srcData);

        std::vector<Interpreter::Node*> dest;
        Interpreter::varType pattern;
        pattern = Interpreter::ABSTRACT;
        if (type == Interpreter::VINT || type == Interpreter::CVINT) pattern = Interpreter::INT;
        else if (type == Interpreter::VBOOL || type == Interpreter::CVBOOL) pattern = Interpreter::BOOL;
        for (auto& node: srcData) {
            Interpreter::Node* tmp = getScalarExprResult(pattern, node);
            dest.push_back(tmp);
        }
        return dest;
    }

    Interpreter::Node* Interpreter::getScalarExprResult(Interpreter::varType vType, Interpreter::Node* scalarData) {
        if (vType == Interpreter::INT || vType == Interpreter::CINT) {
            Interpreter::IntegerNode* newNode = nullptr;
            if (scalarData->nType == Interpreter::OPNODE) {
                Interpreter::OperationNode* tmp = dynamic_cast<Interpreter::OperationNode*>(scalarData);
                switch (tmp->getOperation())
                {
                case plus: case minus: case divide: case vintgetexp: case mintgetexp: {
                    newNode = new Interpreter::IntegerNode(decimal, std::to_string(scalarData->execute()));
                    break;
                }
                case gscalar: {
                        auto nnode = dynamic_cast<Interpreter::OperationNode*>(scalarData);
                        auto search = Interpreter::varStorage.find(nnode->getVN());
                        if (search->second->nType == Interpreter::INTNODE) newNode = new Interpreter::IntegerNode(decimal, std::to_string(scalarData->execute()));
                }
                default:
                    throw "Can't declare variable by this expression!";
                }
            }
            else if (scalarData->nType == Interpreter::INTNODE) {
                Interpreter::IntegerNode* tmp = dynamic_cast<Interpreter::IntegerNode*>(scalarData);
                newNode = tmp;
            }
            else {
                throw "Incorrect declaration!";
            }
            return newNode;
        }
        else if (vType == Interpreter::BOOL || vType == Interpreter::CBOOL) {
            Interpreter::BoolNode* newNode = nullptr;
            if (scalarData->nType == Interpreter::OPNODE) {
                Interpreter::OperationNode* tmp = dynamic_cast<Interpreter::OperationNode*>(scalarData);
                switch (tmp->getOperation())
                {
                case less: case greater: case denial: case conjunction: case vboolgetexp: case mboolgetexp: { //and more and more and more
                    newNode = new Interpreter::BoolNode(scalarData->execute() ? std::string("true") : std::string("false"));
                    break;
                } 
                case gscalar: {
                        auto nnode = dynamic_cast<Interpreter::OperationNode*>(scalarData);
                        auto search = Interpreter::varStorage.find(nnode->getVN());
                        if (search->second->nType == Interpreter::BOOLNODE) newNode = new Interpreter::BoolNode(scalarData->execute() ? std::string("true") : std::string("false"));
                }
                default:
                    throw "Can't declare variable by this expression!";
                }
            }
            else if (scalarData->nType == Interpreter::BOOLNODE) {
                Interpreter::BoolNode* tmp = dynamic_cast<Interpreter::BoolNode*>(scalarData);
                newNode = tmp;
            }
            else {
                throw "Incorrect declaration!";
            }
            return newNode;
        }
        else {
            throw "Wrong type!";
        }
        return nullptr;
    }

    void Interpreter::VariableOperationNode::print(std::ostringstream& strm) {}

    int Interpreter::VariableOperationNode::execute() {
        if (vopType == declare) {
            Node* newNode = nullptr;
            switch (vType)
            {
            case Interpreter::INT:
                newNode = getScalarExprResult(vType, scalarData);
                isConst.insert_or_assign(varName, false);
                dynamic_cast<Interpreter::IntegerNode*>(Interpreter::varStorage[varName])->setDecData(dynamic_cast<Interpreter::IntegerNode*>(newNode)->getDecData());
                break;
            case Interpreter::BOOL:
                newNode = getScalarExprResult(vType, scalarData);
                isConst.insert_or_assign(varName, false);
                dynamic_cast<Interpreter::BoolNode*>(Interpreter::varStorage[varName])->writeData(dynamic_cast<Interpreter::BoolNode*>(newNode)->getData());
                break;
            case Interpreter::CINT: 
                newNode = getScalarExprResult(vType, scalarData);
                isConst.insert_or_assign(varName, true);
                dynamic_cast<Interpreter::IntegerNode*>(Interpreter::varStorage[varName])->setDecData(dynamic_cast<Interpreter::IntegerNode*>(newNode)->getDecData());
                break;
            case Interpreter::CBOOL:
                newNode = getScalarExprResult(vType, scalarData);
                isConst.insert_or_assign(varName, true);
                dynamic_cast<Interpreter::BoolNode*>(Interpreter::varStorage[varName])->writeData(dynamic_cast<Interpreter::BoolNode*>(newNode)->getData());
                break;
            case Interpreter::VINT:
                newNode = new Interpreter::IntegerVectorNode(getVectorExprResult(vType, vectorData), vectorData->getSize());
                isConst.insert_or_assign(varName, false);
                dynamic_cast<Interpreter::AbstractVectorNode*>(Interpreter::varStorage[varName])->setData(dynamic_cast<Interpreter::AbstractVectorNode*>(newNode)->getData());
                dynamic_cast<Interpreter::AbstractVectorNode*>(Interpreter::varStorage[varName])->nType = Interpreter::INTVECNODE;
                break;

            case Interpreter::VBOOL:
                newNode = new Interpreter::BoolVectorNode(getVectorExprResult(vType, vectorData), vectorData->getSize());
                isConst.insert_or_assign(varName, false);
                dynamic_cast<Interpreter::AbstractVectorNode*>(Interpreter::varStorage[varName])->setData(dynamic_cast<Interpreter::AbstractVectorNode*>(newNode)->getData());
                dynamic_cast<Interpreter::AbstractVectorNode*>(Interpreter::varStorage[varName])->nType = Interpreter::BOOLVECNODE;
                break;

            case Interpreter::CVBOOL:
                newNode = new Interpreter::BoolVectorNode(getVectorExprResult(vType, vectorData), vectorData->getSize());
                isConst.insert_or_assign(varName, true);
                dynamic_cast<Interpreter::AbstractVectorNode*>(Interpreter::varStorage[varName])->setData(dynamic_cast<Interpreter::AbstractVectorNode*>(newNode)->getData());
                dynamic_cast<Interpreter::AbstractVectorNode*>(Interpreter::varStorage[varName])->nType = Interpreter::BOOLVECNODE;
                break;

            case Interpreter::CVINT: 
                newNode = new Interpreter::IntegerVectorNode(getVectorExprResult(vType, vectorData), vectorData->getSize());
                isConst.insert_or_assign(varName, true);
                dynamic_cast<Interpreter::AbstractVectorNode*>(Interpreter::varStorage[varName])->setData(dynamic_cast<Interpreter::AbstractVectorNode*>(newNode)->getData());
                dynamic_cast<Interpreter::AbstractVectorNode*>(Interpreter::varStorage[varName])->nType = Interpreter::INTVECNODE;
                break;
            
            case Interpreter::MINT:
                newNode = new Interpreter::IntegerMatrixNode(getMatrixExprResult(vType, matrixData), matrixData->getSizeX(), matrixData->getSizeY());
                isConst.insert_or_assign(varName, false);
                dynamic_cast<Interpreter::AbstractMatrixNode*>(Interpreter::varStorage[varName])->setData(dynamic_cast<Interpreter::AbstractMatrixNode*>(newNode)->getData());
                dynamic_cast<Interpreter::AbstractMatrixNode*>(Interpreter::varStorage[varName])->nType = Interpreter::INTMATNODE;
                break;
            
            case Interpreter::MBOOL: 
                newNode = new Interpreter::IntegerMatrixNode(getMatrixExprResult(vType, matrixData), matrixData->getSizeX(), matrixData->getSizeY());
                isConst.insert_or_assign(varName, false);
                dynamic_cast<Interpreter::AbstractMatrixNode*>(Interpreter::varStorage[varName])->setData(dynamic_cast<Interpreter::AbstractMatrixNode*>(newNode)->getData());
                dynamic_cast<Interpreter::AbstractMatrixNode*>(Interpreter::varStorage[varName])->nType = Interpreter::BOOLMATNODE;
                break;
            
            case Interpreter::CMINT: 
                newNode = new Interpreter::IntegerMatrixNode(getMatrixExprResult(vType, matrixData), matrixData->getSizeX(), matrixData->getSizeY());
                isConst.insert_or_assign(varName, true);
                dynamic_cast<Interpreter::AbstractMatrixNode*>(Interpreter::varStorage[varName])->setData(dynamic_cast<Interpreter::AbstractMatrixNode*>(newNode)->getData());
                dynamic_cast<Interpreter::AbstractMatrixNode*>(Interpreter::varStorage[varName])->nType = Interpreter::INTMATNODE;
                break;
            
            case Interpreter::CMBOOL:
                newNode = new Interpreter::IntegerMatrixNode(getMatrixExprResult(vType, matrixData), matrixData->getSizeX(), matrixData->getSizeY());
                isConst.insert_or_assign(varName, true);
                dynamic_cast<Interpreter::AbstractMatrixNode*>(Interpreter::varStorage[varName])->setData(dynamic_cast<Interpreter::AbstractMatrixNode*>(newNode)->getData());
                dynamic_cast<Interpreter::AbstractMatrixNode*>(Interpreter::varStorage[varName])->nType = Interpreter::BOOLMATNODE;
                break;

            default:
                throw "Invalid variable type!";
            }
        }
        else if (vopType == assign) {
            auto search = Interpreter::varStorage.find(varName);
            Node* newNode = nullptr;
            if (search->second->nType == Interpreter::INTNODE) {
                newNode = getScalarExprResult(Interpreter::INT, scalarData);
            }
            else if (search->second->nType == Interpreter::BOOLNODE) {
                newNode = getScalarExprResult(Interpreter::BOOL, scalarData);
            }
            else if (search->second->nType == Interpreter::INTVECNODE) {
                newNode = new Interpreter::IntegerVectorNode(getVectorExprResult(Interpreter::VINT, vectorData), vectorData->getSize());
            }
            else if (search->second->nType == Interpreter::BOOLVECNODE) {
                newNode = new Interpreter::IntegerVectorNode(getVectorExprResult(Interpreter::VBOOL, vectorData), vectorData->getSize());
            }
            else if (search->second->nType == Interpreter::INTMATNODE) {
                newNode = new Interpreter::IntegerMatrixNode(getMatrixExprResult(Interpreter::MINT, matrixData), matrixData->getSizeX(), matrixData->getSizeY());
            }
            else if (search->second->nType == Interpreter::BOOLMATNODE) {
                newNode = new Interpreter::IntegerMatrixNode(getMatrixExprResult(Interpreter::MBOOL, matrixData), matrixData->getSizeX(), matrixData->getSizeY());
            }
            else throw "Invalid variable type!";
            std::free(varStorage[varName]);
            varStorage.insert_or_assign(varName, newNode);
        }
        else throw "Invalid operation!";
        return 0;
    }

    int Interpreter::VecMatVariableOperationNode::execute() {
        switch(oper) {
            case vexpr: {
                if (src->nType == INTVECNODE && suitForArithm(exprs[0]) && suitForArithm(exprs[1])) {
                    auto ssrc = static_cast<Interpreter::IntegerVectorNode*>(src);
                    if (exprs[0]->execute() < 0 || exprs[0]->execute() >= ssrc->getSize()) throw "Out of range!";
                    (*ssrc)[exprs[0]->execute()] = IntegerNode(decimal, std::to_string(exprs[1]->execute()));
                }
                else if (src->nType == BOOLVECNODE && suitForArithm(exprs[0]) && suitForLogic(exprs[1])) {
                    auto ssrc = dynamic_cast<Interpreter::BoolVectorNode*>(src);
                    if (exprs[0]->execute() < 0 || exprs[0]->execute() >= ssrc->getSize()) throw "Out of range!";
                    (*ssrc)[exprs[0]->execute()] = BoolNode(exprs[1]->execute() ? "true" : "false");
                }
                else throw "Type mismatch!";
                break;
            }
            case vvec: {
                auto futureCondition = dynamic_cast<Interpreter::ContainerVectorNode*>(exprs[0]); 
                nodeType typeCondition;
                AbstractVectorNode* vecCondition = Interpreter::VECgetNode_checkType(futureCondition, typeCondition);

                if (typeCondition == Interpreter::ABSTRACTVECNODE) throw "Error in index";
                if (typeCondition == Interpreter::INTVECNODE) {
                    auto vecCond = dynamic_cast<Interpreter::IntegerVectorNode*>(vecCondition);

                    nodeType typeExpr;
                    AbstractVectorNode* vecExp;
                    vecExp = Interpreter::VECgetNode_checkType(vecNode, typeExpr);
                    if (typeExpr == src->nType && typeExpr == Interpreter::INTVECNODE) {
                        auto vecSrc = static_cast<Interpreter::IntegerVectorNode*>(src);
                        auto vecExpr = static_cast<Interpreter::IntegerVectorNode*>(vecExp);

                        if (vecCond->getSize() != vecExpr->getSize()) throw "Dimension mismatch!";

                        for (size_t i = 0; i < vecCond->getSize(); i++) {
                            if (!(0 <= (*vecCond)[i].execute() && (*vecCond)[i].execute() < vecSrc->getSize())) throw "Invalid index!";
                        }

                        for (size_t i = 0; i < vecCond->getSize(); i++) {
                            (*vecSrc)[(*vecCond)[i].execute()] = Interpreter::IntegerNode(decimal, std::to_string((*vecExpr)[i].execute()));
                        }
                    } 
                    else if (typeExpr == src->nType && typeExpr == Interpreter::BOOLVECNODE) {
                        auto vecSrc = dynamic_cast<Interpreter::BoolVectorNode*>(src);
                        auto vecExpr = dynamic_cast<Interpreter::BoolVectorNode*>(vecExp);

                        if (vecCond->getSize() != vecExpr->getSize()) throw "Dimension mismatch!";

                        for (size_t i = 0; i < vecCond->getSize(); i++) {
                            if (!(0 <= (*vecCond)[i].execute() && (*vecCond)[i].execute() < vecSrc->getSize())) throw "Invalid index!";
                        }

                        for (size_t i = 0; i < vecCond->getSize(); i++) {
                            (*vecSrc)[(*vecCond)[i].execute()] = Interpreter::BoolNode((*vecExpr)[i].execute() ? "true" : "false");
                        }
                    }
                    else {
                        throw "Type mismatch!";
                    }
                }
                else if (typeCondition == Interpreter::BOOLVECNODE) {
                    auto vecCond = dynamic_cast<Interpreter::BoolVectorNode*>(vecCondition);
                    std::vector<Interpreter::Node*> cont;
                    for (size_t i = 0; i < vecCond->getSize(); i++) {
                        if ((*vecCond)[i].execute()) {
                            auto tmp = new Interpreter::IntegerNode(decimal, std::to_string(i));
                            cont.push_back(tmp);
                        }
                    }
                    auto contCond = new Interpreter::ContainerVectorNode(cont, cont.size());
                    std::vector<Interpreter::Node*> ttmp;
                    ttmp.push_back(contCond);

                    auto tmpvecmat = new Interpreter::VecMatVariableOperationNode(vvec, src, vecNode, ttmp);
                    tmpvecmat->execute();
                }
                break;
            }
            case mexpr: {
                if (suitForArithm(exprs[0])) {
                    auto ssrc = dynamic_cast<Interpreter::AbstractMatrixNode*>(src);
                    Interpreter::Node* srcvec = ssrc->getByIndex(exprs[0]->execute());
                    std::vector<Interpreter::Node*> newkids;
                    newkids.push_back(exprs[1]);
                    newkids.push_back(exprs[2]);

                    auto tmp = new VecMatVariableOperationNode(vexpr, srcvec, newkids);
                    tmp->execute();
                }
                else throw "Type mismatch!";
                break;
            }        
            case mexprcolumn: {
                auto ssrc = dynamic_cast<Interpreter::AbstractMatrixNode*>(src);

                if (ssrc->getSizeX() != vecNode->getSize()) throw "Dimension mismatch!";
                for (int i = 0; i < ssrc->getSizeX(); i++) {
                    Interpreter::Node* srcvec = ssrc->getByIndex(i);
                    std::vector<Interpreter::Node*> newkids;
                    newkids.push_back(exprs[0]);
                    newkids.push_back((*vecNode)[i]);

                    auto tmp = new VecMatVariableOperationNode(vexpr, srcvec, newkids);
                    tmp->execute();
                }
                break;
            }
            case mexprrow: {
                auto ssrc = dynamic_cast<Interpreter::AbstractMatrixNode*>(src);

                if (ssrc->getSizeY() != vecNode->getSize()) throw "Dimension mismatch!";
                Interpreter::Node* srcvec = ssrc->getByIndex(exprs[0]->execute());
                for (int i = 0; i < ssrc->getSizeY(); i++) {
                    std::vector<Interpreter::Node*> newkids;
                    auto ttmp = new Interpreter::IntegerNode(decimal, std::to_string(i)); 
                    newkids.push_back(ttmp);
                    newkids.push_back((*vecNode)[i]);

                    auto tmp = new VecMatVariableOperationNode(vexpr, srcvec, newkids);
                    tmp->execute();
                }
                break;
            }
            case mveccolumn: {
                auto ssrc = dynamic_cast<Interpreter::AbstractMatrixNode*>(src);
                
                std::vector<Interpreter::Node*> kids;
                kids.push_back(exprs[0]);

                if (ssrc->getSizeX() == matNode->getSizeX()) {
                    for (size_t i = 0; i < ssrc->getSizeX(); i++) {                   
                        Interpreter::AbstractVectorNode* ttmp = ssrc->getByIndex(i); 
                        auto tmp = new Interpreter::VecMatVariableOperationNode(vvec, ttmp, (*matNode)[i], kids);
                        tmp->execute();
                    }
                }
                else throw "Dimension mismatch!";
                break;
            }
            case mvecrow: {
                auto ssrc = dynamic_cast<Interpreter::AbstractMatrixNode*>(src);
                auto condVec = static_cast<Interpreter::ContainerVectorNode*>(exprs[0]);
                if (ssrc->getSizeY() == matNode->getSizeY()) {
                    nodeType conNodeType;
                    auto conVec = VECgetNode_checkType(condVec, conNodeType);

                    if (conNodeType == Interpreter::INTVECNODE) {
                        for (size_t i = 0; i < conVec->getSize(); i++) if (conVec->getByIndex(i)->execute() >= ssrc->getSizeX() || conVec->getByIndex(i)->execute() < 0) throw "Invalid index!";
                        if (matNode->getSizeX() != conVec->getSize()) throw "Dimension mismatch!";
                        for (size_t i = 0; i < conVec->getSize(); i++) {
                            nodeType exprType;
                            auto expr = VECgetNode_checkType((*matNode)[i], exprType);
                            if (exprType != ssrc->getByIndex(0)->nType) throw "Type mismatch!";
                            ssrc->getByIndex(conVec->getByIndex(i)->execute()) = expr;
                        }
                    }
                    
                    else if (conNodeType == Interpreter::BOOLVECNODE) {
                        int trueAmount = 0;
                        for (size_t i = 0; i < conVec->getSize(); i++) {
                            if (conVec->getByIndex(i)->execute()) trueAmount++;
                        }
                        if (conVec->getSize() == ssrc->getSizeX() && trueAmount == matNode->getSizeX()) {
                            size_t j = 0;
                            for (size_t i = 0; i < conVec->getSize(); i++) {
                                if (conVec->getByIndex(i)->execute()) {
                                    nodeType exprType;
                                    auto expr = VECgetNode_checkType((*matNode)[j], exprType);
                                    if (exprType != ssrc->getByIndex(0)->nType) throw "Type mismatch!";
                                    ssrc->getByIndex(i) = expr;
                                    j++;
                                }
                            }
                        }
                        else throw "Dimension mismatch!";
                    }

                    else throw "Type mismatch!";
                }
                else throw "Dimension mismatch!";
                break;
            }
            case mmat: {
                auto ssrc = dynamic_cast<Interpreter::AbstractMatrixNode*>(src);
                auto condMat = static_cast<Interpreter::ContainerMatrixNode*>(exprs[0]);

                if (ssrc->getSizeX() == condMat->getSizeX() && ssrc->getSizeY() == condMat->getSizeY()) {
                    for (size_t i = 0; i < ssrc->getSizeX(); i++) {
                        nodeType condType;
                        auto cond = VECgetNode_checkType((*condMat)[i], condType);
                        if (cond->nType != Interpreter::BOOLVECNODE) throw "Type mismatch!";
                        
                        bool flag = false;
                        for (int j = 0; j < cond->getSize(); j++) {
                            if (cond->getByIndex(j)->execute()) flag = true;
                        }
                        if (!flag) continue;

                        std::vector<Interpreter::Node*> kids;
                        kids.push_back((*condMat)[i]);
                        auto tmp = new Interpreter::VecMatVariableOperationNode(vvec, ssrc->getByIndex(i), (*matNode)[i], kids);
                        tmp->execute();

                        if (ssrc->getByIndex(i)->getSize() != ssrc->getSizeY()) throw "Indexes should form rectangle matrix!";
                    }
                }
                else throw "Dimension mismatch!";
                break;
            }
            default:
                throw "Incorrect operation!";
        }
        return 0;
    }