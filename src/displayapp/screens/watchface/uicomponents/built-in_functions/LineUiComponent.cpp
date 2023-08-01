#include "displayapp/screens/watchface/uicomponents/built-in_functions/LineUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

LineUiComponent::LineUiComponent(UiType::TYPE type, IntegerUiComponentType* x, IntegerUiComponentType* y, IntegerUiComponentType* xx, IntegerUiComponentType* yy, IntegerUiComponentType* thickness): BuiltInFunctionUiComponent(type, x, y) {
    this->xx = xx;
    this->yy = yy;
    this->thickness = thickness;
}

LineUiComponent::~LineUiComponent() {
    delete this->xx;
    delete this->yy;
    delete this->thickness;
}

void LineUiComponent::executeSelf(bool shouldDraw, std::vector<UiComponent*> components) {
    if (shouldDraw) {
        for (unsigned int i = 0; i < components.size(); i++) {}

        if (this->UIObject == nullptr) {
            short ix, iy, ixx, iyy, ithickness;
            ix = static_cast<short>(std::stoi(this->x->getValue()));
            iy = static_cast<short>(std::stoi(this->y->getValue()));
            ixx = static_cast<short>(std::stoi(this->xx->getValue()));
            iyy = static_cast<short>(std::stoi(this->yy->getValue()));
            ithickness = static_cast<short>(std::stoi(this->thickness->getValue()));

            static lv_style_t style_line;
            lv_style_init(&style_line);
            lv_style_set_line_width(&style_line, LV_STATE_DEFAULT, ithickness);
            lv_style_set_line_rounded(&style_line, LV_STATE_DEFAULT, true);

            static lv_point_t line_points[] = { {ix, iy}, {ixx, iyy} };
            this->UIObject = lv_line_create(lv_scr_act(), NULL);
            lv_line_set_points(this->UIObject, line_points, 2);     
            lv_obj_add_style(this->UIObject, LV_LINE_PART_MAIN, &style_line);
            lv_obj_align(this->UIObject, NULL, LV_ALIGN_IN_TOP_LEFT, 0, 0);
        } else {
            // Show
        }
    } else {
        if (this->UIObject != nullptr) {
            // Hide
        }
    }
}

void LineUiComponent::update(bool shouldUpdate) {
    if (shouldUpdate) {

    }
}

UiComponent* LineUiComponent::parseValues(std::vector<std::string> values) {
    IntegerUiComponentType* x = IntegerUiComponentType::validate(values.at(0));
    IntegerUiComponentType* y = IntegerUiComponentType::validate(values.at(1));
    IntegerUiComponentType* xx = IntegerUiComponentType::validate(values.at(2));
    IntegerUiComponentType* yy = IntegerUiComponentType::validate(values.at(3));
    IntegerUiComponentType* thickness = IntegerUiComponentType::validate(values.at(4));
    return new LineUiComponent(UiType::LINE, x, y, xx, yy, thickness);
}