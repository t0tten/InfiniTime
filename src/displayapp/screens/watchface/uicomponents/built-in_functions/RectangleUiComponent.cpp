#include "displayapp/screens/watchface/uicomponents/built-in_functions/RectangleUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

RectangleUiComponent::RectangleUiComponent(std::vector<std::string>& values): BuiltInFunctionUiComponent(UiType::RECTANGLE,
                                                                              new IntegerUiComponentType(values.at(0)),
                                                                              new IntegerUiComponentType(values.at(1)))
{
    this->xx = new IntegerUiComponentType(values.at(2));
    this->yy = new IntegerUiComponentType(values.at(3));
}

RectangleUiComponent::~RectangleUiComponent() {
    delete this->xx;
    delete this->yy;
}

void RectangleUiComponent::executeSelf(const std::vector<UiComponent*>& components) {
    for (unsigned int i = 0; i < components.size(); i++) {}

    int ixx = std::stoi(this->xx->getValue());
    int iyy = std::stoi(this->yy->getValue());
    this->UIObject = lv_obj_create(lv_scr_act(), nullptr);
    lv_obj_set_style_local_radius(this->UIObject, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, 0);
    lv_obj_set_size(this->UIObject, ixx, iyy);
    this->setCoords(this->x, this->y);
}

void RectangleUiComponent::update(const bool& shouldUpdate) {
    if (shouldUpdate) {

    }
}