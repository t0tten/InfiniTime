#include "displayapp/screens/watchface/uicomponents/built-in_variables/ClockComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

ClockComponent::ClockComponent(const UiType::TYPE& type): VariableComponent(type) {}
ClockComponent::~ClockComponent() {}
std::string ClockComponent::getValue() {
    this->hours = "13";
    this->minutes = "37";
    this->seconds = "00";

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
std::string ClockComponent::getHours() const { return this->hours; }
std::string ClockComponent::getMinutes() const { return this->minutes; }
std::string ClockComponent::getSeconds() const { return this->seconds; }
std::string ClockComponent::getTime() const { return this->getHours() + ":" + this->getMinutes(); }
std::string ClockComponent::getFullTime() const { return this->getTime() + ":" + this->getSeconds(); }