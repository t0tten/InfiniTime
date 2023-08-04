#include "displayapp/screens/watchface/uicomponents/built-in_variables/VariableComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

VariableComponent::~VariableComponent() {}

UiType::TYPE VariableComponent::getType() const {
    return this->type;
}

VariableComponent::VariableComponent(const UiType::TYPE& type) {
    this->type = type;
}