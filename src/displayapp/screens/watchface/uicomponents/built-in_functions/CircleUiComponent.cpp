#include "displayapp/screens/watchface/uicomponents/built-in_functions/CircleUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

CircleUiComponent::CircleUiComponent(UiType::TYPE type, IntegerUiComponentType* x, IntegerUiComponentType* y, IntegerUiComponentType* radius): BuiltInFunctionUiComponent(type, x, y) {
    this->radius = radius;
}

CircleUiComponent::~CircleUiComponent() {
    delete this->radius;
}

void CircleUiComponent::executeSelf(bool shouldDraw, std::vector<UiComponent*> components) {
    if (shouldDraw) {
        for (unsigned int i = 0; i < components.size(); i++) {}

        if (this->UIObject == nullptr) {
            int iradius = std::stoi(this->radius->getValue());
            this->UIObject = lv_obj_create(lv_scr_act(), nullptr);
            lv_obj_set_style_local_radius(this->UIObject, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_RADIUS_CIRCLE);
            lv_obj_set_size(this->UIObject, iradius, iradius);
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

void CircleUiComponent::update(bool shouldUpdate) {
    if (shouldUpdate) {

    }
}

UiComponent* CircleUiComponent::parseValues(std::vector<std::string> values) {
    IntegerUiComponentType* x = IntegerUiComponentType::validate(values.at(0));
    IntegerUiComponentType* y = IntegerUiComponentType::validate(values.at(1));
    IntegerUiComponentType* radius = IntegerUiComponentType::validate(values.at(2));

    return new CircleUiComponent(UiType::CIRCLE, x, y, radius);
}