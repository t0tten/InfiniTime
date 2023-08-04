#include "displayapp/screens/watchface/uicomponents/translators/TypeTranslator.h"

using namespace Pinetime::Applications::Screens::WatchFace;

UiComponentType* TypeTranslator::translateTypeToComponent(const UiType::TYPE& type, std::string& value) const {
    switch(type) {
        case UiType::STRING:
            return new StringUiComponentType(value);
        case UiType::INTEGER:
            return new IntegerUiComponentType(value);
        case UiType::BOOLEAN:
            return new BooleanUiComponentType(value);
        default:
            return nullptr;
    }
}

VariableComponent* TypeTranslator::translateVariableToComponent(const UiType::TYPE& type) const {
    switch(type) {
        case UiType::CLOCK:
        case UiType::CLOCK_FULL:
        case UiType::CLOCK_HOUR:
        case UiType::CLOCK_MIN:
        case UiType::CLOCK_SEC:
            return new ClockComponent(type);
        case UiType::BATT:
            return new BatteryComponent(type);
        case UiType::BT:
            return new BluetoothComponent(type);
        case UiType::DATE:
        case UiType::DATE_FULL:
        case UiType::DATE_FULL_YEAR:
        case UiType::DATE_YEAR:
        case UiType::DATE_MONTH:
        case UiType::DATE_DAY:
            return new DateComponent(type);
        case UiType::HEART:
            return new HeartComponent(type);
        case UiType::STEPS:
            return new StepComponent(type);
        default:
            return nullptr;
    }
}