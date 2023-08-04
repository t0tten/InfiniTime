#include "displayapp/screens/watchface/uicomponents/built-in_variables/DateComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

DateComponent::DateComponent(const UiType::TYPE& type): VariableComponent(type) {}
DateComponent::~DateComponent() {}
std::string DateComponent::getValue() {
    this->fullYear = "2023";
    this->year = "23";
    this->month = "07";
    this->day = "20";

    switch (this->getType()) {
        case UiType::DATE:
            return this->getDate();
        case UiType::DATE_FULL:
            return this->getFullDate();
        case UiType::DATE_FULL_YEAR:
            return this->getFullYear();
        case UiType::DATE_YEAR:
            return this->getYear();
        case UiType::DATE_MONTH:
            return this->getMonth();
        case UiType::DATE_DAY:
            return this->getDay();
        default:
            return "";
    }
}
std::string DateComponent::getDate() const { return this->getYear() + "/" + this->getMonth() + "/" + this->getDay();}
std::string DateComponent::getFullDate() const { return this->getFullYear() + "/" + this->getMonth() + "/" + this->getDay(); }
std::string DateComponent::getFullYear() const { return this->fullYear; }
std::string DateComponent::getYear() const { return this->year; }
std::string DateComponent::getMonth() const { return this->month; }
std::string DateComponent::getDay() const { return this->day; }