#include "displayapp/screens/watchface/uicomponents/arithmetics/IfArithmeticUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

IfArithmeticUiComponent::IfArithmeticUiComponent(): ArithmeticUiComponent(UiType::IF) {
    this->component1 = nullptr;
    this->component2 = nullptr;
    this->op = "=";
}

IfArithmeticUiComponent::IfArithmeticUiComponent(std::string& values): ArithmeticUiComponent(UiType::IF) {
    TypeTranslator* tt = new TypeTranslator();
    this->component1 = tt->translateTypeToComponent(UiType::STRING, values);
    this->component2 = tt->translateTypeToComponent(UiType::STRING, values);
    delete tt;
    this->op = "=";
}

bool IfArithmeticUiComponent::continueWithNextIfStatement(const bool& shouldDraw, ColorComponent* color, ArrayList<UiComponent*>& components) {
    for (unsigned int i = 0; i < this->ifComponents.size(); i++) {
        if(this->ifComponents.get(i)->execute(shouldDraw, color, components)) {
            return true;
        }
    }
    return false;
}

IfArithmeticUiComponent::~IfArithmeticUiComponent() {
    if (this->component1 != NULL) {
        delete this->component1;
    }

    if (this->component2 != NULL) {
        delete this->component2;
    }

    for (unsigned int i = 0; i < ifComponents.size(); i++) {
        delete ifComponents.get(i);
    }
}

bool IfArithmeticUiComponent::execute(const bool& shouldDraw, ColorComponent* color, ArrayList<UiComponent*>& components) {
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
    this->ifComponents.append(ifComponent);
}