#include "displayapp/screens/watchface/uicomponents/ui_components_types/IntegerUiComponentType.h"

using namespace Pinetime::Applications::Screens::WatchFace;

IntegerUiComponentType::IntegerUiComponentType(std::string& data): UiComponentType(UiType::INTEGER, data) {
    this->regex.push_back("{i}");
    this->regex.push_back("[0-9]+");
}
IntegerUiComponentType::~IntegerUiComponentType() {}

std::string IntegerUiComponentType::getValue() const {
    return this->data;
}