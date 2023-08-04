#include "displayapp/screens/watchface/uicomponents/built-in_variables/BatteryComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

BatteryComponent::BatteryComponent(const UiType::TYPE& type): VariableComponent(type) {}
BatteryComponent::~BatteryComponent() {}
std::string BatteryComponent::getValue() {
    std::string batteryPercentage = "96";
    return batteryPercentage;
}