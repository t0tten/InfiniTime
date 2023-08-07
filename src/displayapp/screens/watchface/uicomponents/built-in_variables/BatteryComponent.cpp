#include "displayapp/screens/watchface/uicomponents/built-in_variables/BatteryComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

BatteryComponent::BatteryComponent(const UiType::TYPE& type): VariableComponent(type) {}
BatteryComponent::~BatteryComponent() {}
const char* BatteryComponent::getValue() {
    const char* batteryPercentage = "96";
    return batteryPercentage;
}