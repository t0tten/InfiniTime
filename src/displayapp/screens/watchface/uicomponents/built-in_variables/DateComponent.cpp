#include "displayapp/screens/watchface/uicomponents/built-in_variables/DateComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

DateComponent::DateComponent(const UiType::TYPE& type): VariableComponent(type) {
    this->fullYear = "2023";
    this->year = "23";
    this->month = "07";
    this->day = "20";
}
DateComponent::~DateComponent() {}
const char* DateComponent::getValue() {
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
const char* DateComponent::getDate() const {
    CharManipulation* cm = new CharManipulation();
    char* retVal = cm->concat(cm->concat(cm->concat(cm->concat(this->getYear(), "/"), this->getMonth()), "/"), this->getDay());
    delete cm;
    return retVal;
}
const char* DateComponent::getFullDate() const {
    CharManipulation* cm = new CharManipulation();
    char* retVal = cm->concat(cm->concat(cm->concat(cm->concat(this->getFullYear(), "/"), this->getMonth()), "/"), this->getDay());
    delete cm;
    return retVal;
}
const char* DateComponent::getFullYear() const { return this->fullYear; }
const char* DateComponent::getYear() const { return this->year; }
const char* DateComponent::getMonth() const { return this->month; }
const char* DateComponent::getDay() const { return this->day; }