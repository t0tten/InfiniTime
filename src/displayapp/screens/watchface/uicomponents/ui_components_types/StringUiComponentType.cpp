#include "displayapp/screens/watchface/uicomponents/ui_components_types/StringUiComponentType.h"

using namespace Pinetime::Applications::Screens::WatchFace;

StringUiComponentType::~StringUiComponentType() {}

StringUiComponentType::StringUiComponentType(std::string& data): UiComponentType(UiType::STRING, data) {
    this->regex.append("\"[a-zA-Z0-9\\{\\}]\"");
}

std::string StringUiComponentType::getValue() const {
    return this->data;
}