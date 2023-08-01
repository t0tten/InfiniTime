#include "displayapp/screens/watchface/uicomponents/ui_components_types/UiComponentType.h"

using namespace Pinetime::Applications::Screens::WatchFace;

UiComponentType* UiComponentType::translateToVariable(UiType::TYPE type) {
    if (type == UiType::NOOP) {}
    return nullptr;
    /*switch(type) {
        case UiType::CLOCK:
        case UiType::CLOCK_FULL:
        case UiType::CLOCK_HOUR:
        case UiType::CLOCK_MIN:
        case UiType::CLOCK_SEC:
            return nullptr; //ClockVariableUiComponent::create(type, value);
        case UiType::BOOLEAN_TRUE:
        case UiType::BOOLEAN_FALSE:
            return nullptr; //BooleanVariableUiComponent::create(type, value);
        case UiType::BATT:
            return nullptr; //BatteryVariableUiComponent::create(type, value);
        case UiType::BT:
            return nullptr; //BluetoothVariableUiComponent::create(type, value);
        case UiType::DATE:
        case UiType::DATE_FULL:
        case UiType::DATE_FULL_YEAR:
        case UiType::DATE_YEAR:
        case UiType::DATE_MONTH:
        case UiType::DATE_DAY:
            return nullptr; //DateVariableUiComponent::create(type, value);
        case UiType::HEART:
            return nullptr; //HeartVariableUiComponent::create(type, value);
        case UiType::STEPS:
            return nullptr; //StepsVariableUiComponent::create(type, value);
        default:
            return nullptr;
    }
    return nullptr;*/
}
UiComponentType::~UiComponentType() {}

UiComponentType::UiComponentType(UiType::TYPE type, std::string data) {
    this->type = type;
    this->data = data;
}

UiType::TYPE UiComponentType::getType() {
    return this->type;
}