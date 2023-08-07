#include "displayapp/screens/watchface/uicomponents/built-in_variables/ClockComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

ClockComponent::ClockComponent(const UiType::TYPE& type): VariableComponent(type) {
    this->hours = "13";
    this->minutes = "37";
    this->seconds = "00";
}
ClockComponent::~ClockComponent() {}
const char* ClockComponent::getValue() {
    switch(this->getType()) {
        case UiType::CLOCK:
            return this->getTime();
        case UiType::CLOCK_FULL:
            return this->getFullTime();
        case UiType::CLOCK_HOUR:
            return this->getHours();
        case UiType::CLOCK_MIN:
            return this->getMinutes();
        case UiType::CLOCK_SEC:
            return this->getSeconds();
        default:
            return "";
    }
}
const char* ClockComponent::getHours() const { return this->hours; }
const char* ClockComponent::getMinutes() const { return this->minutes; }
const char* ClockComponent::getSeconds() const { return this->seconds; }
const char* ClockComponent::getTime() const {
    CharManipulation* cm = new CharManipulation();
    char* retVal = cm->concat(cm->concat(this->getHours(), ":"), this->getMinutes());
    delete cm;
    return retVal;
}

const char* ClockComponent::getFullTime() const { 
    CharManipulation* cm = new CharManipulation();
    char* retVal = cm->concat(cm->concat(this->getTime(), ":"), this->getSeconds());
    delete cm;
    return retVal;
}