#include "displayapp/screens/watchface/uicomponents/ui_components_types/BooleanUiComponentType.h"

using namespace Pinetime::Applications::Screens::WatchFace;

BooleanUiComponentType::BooleanUiComponentType(const char*& data): UiComponentType(UiType::BOOLEAN, data)  {
    this->regex.append("true");
    this->regex.append("false");
}
BooleanUiComponentType::~BooleanUiComponentType() {}

const char* BooleanUiComponentType::getValue() const {
    return this->data;
}