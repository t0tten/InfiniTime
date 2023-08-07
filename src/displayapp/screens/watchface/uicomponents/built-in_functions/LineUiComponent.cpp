#include "displayapp/screens/watchface/uicomponents/built-in_functions/LineUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

LineUiComponent::LineUiComponent(ArrayList<const char*>& values): BuiltInFunctionUiComponent(UiType::LINE)
{
    const char* x = values.get(0);
    const char* y = values.get(1);
    const char* xx = values.get(2);
    const char* yy = values.get(3);
    const char* thickness = values.get(4);

    this->init(new IntegerUiComponentType(x), new IntegerUiComponentType(y));
    this->xx = new IntegerUiComponentType(xx);
    this->yy = new IntegerUiComponentType(yy);
    this->thickness = new IntegerUiComponentType(thickness);
}

LineUiComponent::~LineUiComponent() {
    delete this->xx;
    delete this->yy;
    delete this->thickness;
}

void LineUiComponent::executeSelf(ArrayList<UiComponent*>& components) {
    for (unsigned int i = 0; i < components.size(); i++) {}

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
}

void LineUiComponent::update(const bool& shouldUpdate) {
    if (shouldUpdate) {

    }
}