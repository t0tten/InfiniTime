#include "displayapp/screens/watchface/uicomponents/arithmetics/ArithmeticUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

/* PROTECTED */
ArithmeticUiComponent::ArithmeticUiComponent(UiType::TYPE type): UiComponent(type) { }

/* PUBLIC */
ArithmeticUiComponent::~ArithmeticUiComponent() {
    for (unsigned int i = 0; i < this->codeBlock.size(); i++) {
        delete codeBlock[i];
    }
}

void ArithmeticUiComponent::addCodeBlockComponent(UiComponent* component) {
    this->codeBlock.push_back(component);
}

bool ArithmeticUiComponent::execute(bool shouldDraw, ColorComponent* color, std::vector<UiComponent*> components) {
    ColorComponent* tmpColor = color;
    for (unsigned int i = 0; i < this->codeBlock.size(); i++) {
        switch(this->codeBlock[i]->getType()) {
        case UiType::COLOR:
            {
            ColorUiComponent* clr = static_cast<ColorUiComponent*>(this->codeBlock[i]);
            tmpColor = clr->getColor();
            }
            break;
        default:
            this->codeBlock[i]->execute(shouldDraw, tmpColor, components);
            break;
        }
    }
    return true;
}

void ArithmeticUiComponent::update(bool shouldUpdate) {
    for (unsigned int i = 0; i < this->codeBlock.size(); i++) {
        this->codeBlock[i]->update(shouldUpdate);
    }
}

void ArithmeticUiComponent::executeCodeBlock(bool shouldDraw, ColorComponent* color, std::vector<UiComponent*> components) {
    for (unsigned int i = 0; i < this->codeBlock.size(); i++) {
        this->codeBlock[i]->execute(shouldDraw, color, components);
    }
}

ArithmeticUiComponent* ArithmeticUiComponent::empty() {
    return new ArithmeticUiComponent(UiType::NOOP);
}