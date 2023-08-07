#include "displayapp/screens/watchface/uicomponents/ui_components_types/IntegerUiComponentType.h"

using namespace Pinetime::Applications::Screens::WatchFace;

IntegerUiComponentType::IntegerUiComponentType(std::string& data): UiComponentType(UiType::INTEGER, data) {
    this->regex.append("{i}");
    this->regex.append("[0-9]+");
}
IntegerUiComponentType::~IntegerUiComponentType() {}

std::string IntegerUiComponentType::getValue() const {
    return this->data;
}