#include "displayapp/screens/watchface/uicomponents/built-in_functions/RectangleUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

RectangleUiComponent::RectangleUiComponent(ArrayList<std::string>& values): BuiltInFunctionUiComponent(UiType::RECTANGLE)
{
    std::string x = values.get(0);
    std::string y = values.get(1);
    std::string xx = values.get(2);
    std::string yy = values.get(3);

    this->init(new IntegerUiComponentType(x), new IntegerUiComponentType(y));
    this->xx = new IntegerUiComponentType(xx);
    this->yy = new IntegerUiComponentType(yy);
}

RectangleUiComponent::~RectangleUiComponent() {
    delete this->xx;
    delete this->yy;
}

void RectangleUiComponent::executeSelf(ArrayList<UiComponent*>& components) {
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