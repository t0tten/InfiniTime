#include "displayapp/screens/watchface/uicomponents/arithmetics/ArithmeticUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

/* PROTECTED */
ArithmeticUiComponent::ArithmeticUiComponent(const UiType::TYPE& type): UiComponent(type) { }

/* PUBLIC */
ArithmeticUiComponent::ArithmeticUiComponent(): UiComponent(UiType::NOOP) { }
ArithmeticUiComponent::~ArithmeticUiComponent() {
    for (unsigned int i = 0; i < this->codeBlock.size(); i++) {
        delete codeBlock.get(i);
    }
}

void ArithmeticUiComponent::addCodeBlockComponent(UiComponent* component) {
    this->codeBlock.append(component);
}

bool ArithmeticUiComponent::execute(const bool& shouldDraw, ColorComponent* color, ArrayList<UiComponent*>& components) {
    ColorComponent* tmpColor = color;
    for (unsigned int i = 0; i < this->codeBlock.size(); i++) {
        switch(this->codeBlock.get(i)->getType()) {
        case UiType::COLOR:
            {
            ColorUiComponent* clr = static_cast<ColorUiComponent*>(this->codeBlock.get(i));
            tmpColor = clr->getColor();
            }
            break;
        default:
            this->codeBlock.get(i)->execute(shouldDraw, tmpColor, components);
            break;
        }
    }
    return true;
}

void ArithmeticUiComponent::update(const bool& shouldUpdate) {
    for (unsigned int i = 0; i < this->codeBlock.size(); i++) {
        this->codeBlock.get(i)->update(shouldUpdate);
    }
}

void ArithmeticUiComponent::executeCodeBlock(const bool& shouldDraw, ColorComponent* color, ArrayList<UiComponent*>& components) {
    for (unsigned int i = 0; i < this->codeBlock.size(); i++) {
        this->codeBlock.get(i)->execute(shouldDraw, color, components);
    }
}