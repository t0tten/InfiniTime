#include "displayapp/screens/watchface/uicomponents/ui_components_types/UiComponentType.h"

using namespace Pinetime::Applications::Screens::WatchFace;

UiComponentType::~UiComponentType() {}

UiComponentType::UiComponentType(const UiType::TYPE& type, std::string& data) {
    this->type = type;
    this->data = data;
}

UiType::TYPE UiComponentType::getType() const {
    return this->type;
}

std::string UiComponentType::getRegularExpression() {
    std::string retVal = "";
    for(unsigned short i = 0; i < this->regex.size(); i++) {
        retVal += this->regex[i];
        if (i < (this->regex.size() - 1)) {
            retVal += "|";
        }
    }

    return "(" + retVal+ ")";
}