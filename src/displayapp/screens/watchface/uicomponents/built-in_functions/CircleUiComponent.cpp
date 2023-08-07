#include "displayapp/screens/watchface/uicomponents/built-in_functions/CircleUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

CircleUiComponent::CircleUiComponent(ArrayList<std::string>& values): BuiltInFunctionUiComponent(UiType::CIRCLE)
{
    std::string x = values.get(0);
    std::string y = values.get(1);
    std::string radius = values.get(2);
    this->init(new IntegerUiComponentType(x), new IntegerUiComponentType(y));
    this->radius = new IntegerUiComponentType(radius);
}

CircleUiComponent::~CircleUiComponent() {
    delete this->radius;
}

void CircleUiComponent::executeSelf(ArrayList<UiComponent*>& components) {
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