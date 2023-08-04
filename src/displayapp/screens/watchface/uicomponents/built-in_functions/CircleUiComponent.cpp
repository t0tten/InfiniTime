#include "displayapp/screens/watchface/uicomponents/built-in_functions/CircleUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

CircleUiComponent::CircleUiComponent(std::vector<std::string>& values): BuiltInFunctionUiComponent(UiType::CIRCLE,
                                                                        new IntegerUiComponentType(values.at(0)),
                                                                        new IntegerUiComponentType(values.at(1)))
{
    this->radius = new IntegerUiComponentType(values.at(2));
}

CircleUiComponent::~CircleUiComponent() {
    delete this->radius;
}

void CircleUiComponent::executeSelf(const std::vector<UiComponent*>& components) {
    for (unsigned int i = 0; i < components.size(); i++) {}

    int iradius = std::stoi(this->radius->getValue());
    this->UIObject = lv_obj_create(lv_scr_act(), nullptr);
    lv_obj_set_style_local_radius(this->UIObject, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_RADIUS_CIRCLE);
    lv_obj_set_size(this->UIObject, iradius, iradius);
    this->setCoords(this->x, this->y);
}

void CircleUiComponent::update(const bool& shouldUpdate) {
    if (shouldUpdate) {

    }
}