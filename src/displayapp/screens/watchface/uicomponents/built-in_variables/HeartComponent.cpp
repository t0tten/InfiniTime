#include "displayapp/screens/watchface/uicomponents/built-in_variables/HeartComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

HeartComponent::HeartComponent(const UiType::TYPE& type): VariableComponent(type) {}
HeartComponent::~HeartComponent() {}
const char* HeartComponent::getValue() {
    const char* heartBeat = "72";
    return heartBeat;
}