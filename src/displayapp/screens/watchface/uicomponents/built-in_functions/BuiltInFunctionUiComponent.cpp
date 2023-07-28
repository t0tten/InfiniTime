#include "displayapp/screens/watchface/uicomponents/built-in_functions/BuiltInFunctionUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

BuiltInFunctionUiComponent::BuiltInFunctionUiComponent(UiType::TYPE type, std::string x, std::string y): UiComponent(type) {
    this->UIObject = lv_label_create(lv_scr_act(), nullptr);
    this->x = x;
    this->y = y;
    this->setCoords(x, y);
}

void BuiltInFunctionUiComponent::setCoords(std::string x, std::string y) {
    int ix = std::stoi(x);
    int iy = std::stoi(y);
    lv_obj_align(this->UIObject, lv_scr_act(), LV_ALIGN_IN_LEFT_MID, ix, iy);
}

BuiltInFunctionUiComponent::~BuiltInFunctionUiComponent() {
    if (this->UIObject != NULL) {
        delete this->UIObject;
    }
}