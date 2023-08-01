#include "displayapp/screens/watchface/uicomponents/arithmetics/IfArithmeticUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

/* PRIVATES */
IfArithmeticUiComponent::IfArithmeticUiComponent(UiType::TYPE type, std::string op, UiComponentType* component1, UiComponentType* component2): ArithmeticUiComponent(type) {
    this->op = op;
    this->component1 = component1;
    this->component2 = component2;
}

bool IfArithmeticUiComponent::continueWithNextIfStatement(bool shouldDraw, ColorComponent* color, std::vector<UiComponent*> components) {
    for (unsigned int i = 0; i < this->ifComponents.size(); i++) {
        if(this->ifComponents[i]->execute(shouldDraw, color, components)) {
            return true;
        }
    }
    return false;
}

/* PUBLICS */
IfArithmeticUiComponent::~IfArithmeticUiComponent() {
    if (this->component1 != NULL) {
        delete this->component1;
    }

    if (this->component2 != NULL) {
        delete this->component2;
    }

    for (unsigned int i = 0; i < ifComponents.size(); i++) {
        delete ifComponents[i];
    }
}

bool IfArithmeticUiComponent::execute(bool shouldDraw, ColorComponent* color, std::vector<UiComponent*> components) {
    if (shouldDraw) {
        components.size();
    }

    this->isExperssionTrue = false;
    if (this->component1 != NULL && this->component2 != NULL) {
        int comparer1 = -1;
        int comparer2 = -1;
        if (this->op != "=" && this->op != "!=") {
            comparer1 = std::stoi(this->component1->getValue());
            comparer2 = std::stoi(this->component2->getValue());
        }
        
        if (this->op == "<") {
            if (comparer1 < comparer2) {
                this->isExperssionTrue = true;
            }
        } else if (this->op == ">") {
            if (comparer1 > comparer2) {
                this->isExperssionTrue = true;
            }
        } else if (this->op == "<=") {
            if (comparer1 <= comparer2) {
                this->isExperssionTrue = true;
            }
        } else if (this->op == ">=") {
            if (comparer1 >= comparer2) {
                this->isExperssionTrue = true;
            }
        } else if (this->op == "=") {
            if (this->component1->getValue() == this->component2->getValue()) {
                this->isExperssionTrue = true;
            }
        } else if (this->op == "!=") {
            if (this->component1->getValue() != this->component2->getValue()) {
                this->isExperssionTrue = true;
            }
        }
    } else {
        this->isExperssionTrue = true;
    }

    this->executeCodeBlock(this->isExperssionTrue, color, components);
    this->continueWithNextIfStatement(!this->isExperssionTrue, color, components);
    return this->isExperssionTrue;
}

void IfArithmeticUiComponent::addIfComponent(IfArithmeticUiComponent* ifComponent) {
    this->ifComponents.push_back(ifComponent);
}

/* STATICS */
IfArithmeticUiComponent* IfArithmeticUiComponent::parseValues(std::string values) {
    values = "";
    UiComponentType* com1 = IfArithmeticUiComponent::translateToVariable(UiType::STRING, "test");
    UiComponentType* com2 = IfArithmeticUiComponent::translateToVariable(UiType::STRING, "test");
    return new IfArithmeticUiComponent(UiType::IF, "=", com1, com2);
}

IfArithmeticUiComponent* IfArithmeticUiComponent::emptyValues() {
    return new IfArithmeticUiComponent(UiType::IF, "", nullptr, nullptr);
}
UiComponentType* IfArithmeticUiComponent::translateToVariable(UiType::TYPE type, std::string value) {
    switch(type) {
        case UiType::STRING:
            return StringUiComponentType::validate(value);
        case UiType::INTEGER:
            return IntegerUiComponentType::validate(value);
        default:
            return nullptr;
    }
    return nullptr;
}