#include "displayapp/screens/watchface/uicomponents/ui_components_types/IntegerUiComponentType.h"

using namespace Pinetime::Applications::Screens::WatchFace;

IntegerUiComponentType::~IntegerUiComponentType() {}

IntegerUiComponentType::IntegerUiComponentType(UiType::TYPE type, std::string data): UiComponentType(type, data) { }

std::string IntegerUiComponentType::getValue() {
    return this->data;
}

IntegerUiComponentType* IntegerUiComponentType::validate(std::string data) {
    return new IntegerUiComponentType(UiType::INTEGER, data);
}

std::vector<std::string> IntegerUiComponentType::getRegularExpressionVector() {
    std::vector<std::string> v;
    v.push_back("{i}");
    v.push_back("[0-9]+");
    return v;
}

std::string IntegerUiComponentType::getRegularExpression() {
    std::vector<std::string> regexVector = IntegerUiComponentType::getRegularExpressionVector();
    std::string retVal = "";
    for(unsigned int i = 0; i < regexVector.size(); i++) {
        retVal += regexVector[i];
        if (i < (regexVector.size() - 1)) {
            retVal += "|";
        }
    }

    return "(" + retVal+ ")";
}