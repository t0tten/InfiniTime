#include "displayapp/screens/watchface/uicomponents/UiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

UiComponent::UiComponent() {}
UiComponent::UiComponent(const UiType::TYPE& type) {
    this->type = type;
}
UiComponent::~UiComponent() {}
UiType::TYPE UiComponent::getType() const {
    return this->type;
}