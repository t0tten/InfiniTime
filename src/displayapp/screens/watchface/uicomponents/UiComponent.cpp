#include "displayapp/screens/watchface/uicomponents/UiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

UiComponent::UiComponent() {}
UiComponent::UiComponent(UiType::TYPE type) {
    this->type = type;
}
UiComponent::~UiComponent() {}
