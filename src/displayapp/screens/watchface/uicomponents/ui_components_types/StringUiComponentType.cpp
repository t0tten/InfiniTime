#include "displayapp/screens/watchface/uicomponents/ui_components_types/StringUiComponentType.h"

using namespace Pinetime::Applications::Screens::WatchFace;

StringUiComponentType::~StringUiComponentType() {}

StringUiComponentType::StringUiComponentType(UiType::TYPE type, std::string data): UiComponentType(type, data) {}

std::string StringUiComponentType::getValue() {
    return this->data;
}

StringUiComponentType* StringUiComponentType::validate(std::string data) {
    return new StringUiComponentType(UiType::STRING, data);
}

std::vector<std::string> StringUiComponentType::getRegularExpressionVector() {
    std::vector<std::string> v;
    v.push_back("\"[a-zA-Z0-9\\{\\}]\"");
    return v;
}

std::string StringUiComponentType::getRegularExpression() {
    std::vector<std::string> regexVector = StringUiComponentType::getRegularExpressionVector();
    std::string retVal = "";
    for(unsigned int i = 0; i < regexVector.size(); i++) {
        retVal += regexVector[i];
        if (i < (regexVector.size() - 1)) {
            retVal += "|";
        }
    }

    return "(" + retVal+ ")";
}