#include "displayapp/screens/watchface/uicomponents/built-in_functions/BuiltInFunctionUiComponent.h"
#include "displayapp/screens/watchface/uicomponents/built-in_functions/ColorUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

BuiltInFunctionUiComponent::BuiltInFunctionUiComponent(const UiType::TYPE& type): UiComponent(type) {
    this->x = nullptr;
    this->y = nullptr;
    this->UIObject = nullptr;
}

void BuiltInFunctionUiComponent::init(IntegerUiComponentType* x, IntegerUiComponentType* y) {
    this->x = x;
    this->y = y;
}

void BuiltInFunctionUiComponent::setCoords(IntegerUiComponentType* x, IntegerUiComponentType* y) {
    CharManipulation* cm = new CharManipulation();
    int ix = cm->findInt(x->getValue());
    int iy = cm->findInt(y->getValue());
    delete cm;

    lv_obj_align(this->UIObject, lv_scr_act(), LV_ALIGN_IN_TOP_LEFT, ix, iy);
}

BuiltInFunctionUiComponent::~BuiltInFunctionUiComponent() {
    lv_obj_del(this->UIObject);

    if (this->UIObject != nullptr) {
        delete this->UIObject;
    }

    delete this->x;
    delete this->y;
}

 bool BuiltInFunctionUiComponent::execute(const bool& shouldDraw, ColorComponent* color, ArrayList<UiComponent*>& components) {
    if (shouldDraw) {
        if (this->UIObject == nullptr) {
            this->executeSelf(components);
        } else {
            // Show
            if (color != nullptr) {}
        }

        if (color != nullptr && this->UIObject != nullptr) {
            switch(this->getType()) {
                case UiType::LINE:
                    lv_obj_set_style_local_line_color(this->UIObject, LV_LINE_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_MAKE(color->getR(), color->getG(), color->getB()));
                    break;
                case UiType::TEXT:
                    lv_obj_set_style_local_text_color(this->UIObject, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_MAKE(color->getR(), color->getG(), color->getB()));
                    break;
                default:
                    lv_obj_set_style_local_bg_color(this->UIObject, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_MAKE(color->getR(), color->getG(), color->getB()));
                    break;
            }
        }
    } else {
        if (this->UIObject != nullptr) {
            // Hide
        }
    }
    return true;
 }