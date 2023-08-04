#include "displayapp/screens/watchface/uicomponents/ui_components_types/BooleanUiComponentType.h"

using namespace Pinetime::Applications::Screens::WatchFace;

BooleanUiComponentType::BooleanUiComponentType(std::string& data): UiComponentType(UiType::BOOLEAN, data)  {
    this->regex.push_back("true");
    this->regex.push_back("false");
}
BooleanUiComponentType::~BooleanUiComponentType() {}

std::string BooleanUiComponentType::getValue() const {
    return this->data;
}