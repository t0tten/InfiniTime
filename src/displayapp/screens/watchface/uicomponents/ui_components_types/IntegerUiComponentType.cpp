#include "displayapp/screens/watchface/uicomponents/ui_components_types/IntegerUiComponentType.h"

using namespace Pinetime::Applications::Screens::WatchFace;

IntegerUiComponentType::IntegerUiComponentType(const char*& data): UiComponentType(UiType::INTEGER, data) {
    this->regex.append("{i}");
    this->regex.append("[0-9]+");
}
IntegerUiComponentType::~IntegerUiComponentType() {}

const char* IntegerUiComponentType::getValue() const {
    return this->data;
}