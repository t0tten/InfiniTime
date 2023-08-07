#include "displayapp/screens/watchface/uicomponents/ui_components_types/UiComponentType.h"

using namespace Pinetime::Applications::Screens::WatchFace;

UiComponentType::~UiComponentType() {}

UiComponentType::UiComponentType(const UiType::TYPE& type, const char*& data) {
    this->type = type;
    this->data = data;
}

UiType::TYPE UiComponentType::getType() const {
    return this->type;
}

const char* UiComponentType::getRegularExpression() const {
    // char* retVal = "";
    // CharManipulation* cm = new CharManipulation();
    // for(unsigned short i = 0; i < this->regex.size(); i++) {
    //     retVal = cm->concat(retVal, this->regex.get(i));
    //     if (i < (this->regex.size() - 1)) {
    //         retVal = cm->concat(retVal, "|");
    //     }
    // }
    // cm->concat(retVal, ")");
    // return retVal;

    char* retVal = nullptr;
    CharManipulation* cm = new CharManipulation();
    for(unsigned short i = 0; i < this->regex.size(); i++) {
        retVal = cm->concat(retVal, this->regex.get(i));
        if (i < (this->regex.size() - 1)) {
            retVal = cm->concat(retVal, "|");
        }
    }
    retVal = cm->concat(cm->concat("(", retVal), ")");
    return retVal;
}