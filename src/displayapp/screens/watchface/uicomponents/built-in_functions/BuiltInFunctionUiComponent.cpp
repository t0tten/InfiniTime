#include "displayapp/screens/watchface/uicomponents/built-in_functions/BuiltInFunctionUiComponent.h"
#include "displayapp/screens/watchface/uicomponents/built-in_functions/ColorUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

BuiltInFunctionUiComponent::BuiltInFunctionUiComponent(UiType::TYPE type, IntegerUiComponentType* x, IntegerUiComponentType* y): UiComponent(type) {
    this->x = x;
    this->y = y;
}

void BuiltInFunctionUiComponent::setCoords(IntegerUiComponentType* x, IntegerUiComponentType* y) {
    int ix = std::stoi(x->getValue());
    int iy = std::stoi(y->getValue());
    lv_obj_align(this->UIObject, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, ix, iy);
}

BuiltInFunctionUiComponent::~BuiltInFunctionUiComponent() {
    //lv_obj_del(this->UIObject);
    //delete this->UIObject;
    delete this->x;
    delete this->y;
}

 bool BuiltInFunctionUiComponent::execute(bool shouldDraw, ColorComponent* color, std::vector<UiComponent*> components) {
    this->executeSelf(shouldDraw, components);
    if (shouldDraw && color != nullptr && this->UIObject != nullptr) {
        switch(this->getType()) {
            case UiType::LINE:
                {
                  lv_obj_set_style_local_line_color(this->UIObject, LV_LINE_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_MAKE(color->getR(), color->getG(), color->getB()));
                }
              break;
            case UiType::TEXT:
                {
                  lv_obj_set_style_local_text_color(this->UIObject, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_MAKE(color->getR(), color->getG(), color->getB()));
                }
              break;
            default:
                {
                  lv_obj_set_style_local_bg_color(this->UIObject, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_MAKE(color->getR(), color->getG(), color->getB()));
                }
              break;
        }
        
    }
    return true;
 }