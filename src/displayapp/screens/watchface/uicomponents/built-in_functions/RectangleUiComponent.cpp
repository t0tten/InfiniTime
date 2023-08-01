#include "displayapp/screens/watchface/uicomponents/built-in_functions/RectangleUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

RectangleUiComponent::RectangleUiComponent(UiType::TYPE type, IntegerUiComponentType* x, IntegerUiComponentType* y, IntegerUiComponentType* xx, IntegerUiComponentType* yy): BuiltInFunctionUiComponent(type, x, y) {
    this->xx = xx;
    this->yy = yy;
}

RectangleUiComponent::~RectangleUiComponent() {
    delete this->xx;
    delete this->yy;
}

void RectangleUiComponent::executeSelf(bool shouldDraw, std::vector<UiComponent*> components) {
    if (shouldDraw) {
        for (unsigned int i = 0; i < components.size(); i++) {}

        if (this->UIObject == nullptr) {
            int ixx = std::stoi(this->xx->getValue());
            int iyy = std::stoi(this->yy->getValue());
            this->UIObject = lv_obj_create(lv_scr_act(), nullptr);
            lv_obj_set_style_local_radius(this->UIObject, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, 0);
            lv_obj_set_size(this->UIObject, ixx, iyy);
            this->setCoords(this->x, this->y);
        } else {
            // Show
        }
    } else {
        if (this->UIObject != nullptr) {
            // Hide
        }
    }
    
}

void RectangleUiComponent::update(bool shouldUpdate) {
    if (shouldUpdate) {

    }
}

UiComponent* RectangleUiComponent::parseValues(std::vector<std::string> values) {
    IntegerUiComponentType* x = IntegerUiComponentType::validate(values.at(0));
    IntegerUiComponentType* y = IntegerUiComponentType::validate(values.at(1));
    IntegerUiComponentType* xx = IntegerUiComponentType::validate(values.at(2));
    IntegerUiComponentType* yy = IntegerUiComponentType::validate(values.at(3));

    return new RectangleUiComponent(UiType::RECTANGLE, x, y, xx, yy);
}