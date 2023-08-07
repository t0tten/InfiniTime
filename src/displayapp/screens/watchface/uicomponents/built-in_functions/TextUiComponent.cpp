#include "displayapp/screens/watchface/uicomponents/built-in_functions/TextUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

TextUiComponent::TextUiComponent(ArrayList<const char*>& values): BuiltInFunctionUiComponent(UiType::TEXT)
{
    const char* x = values.get(0);
    const char* y = values.get(1);
    const char* size = values.get(2);
    const char* text = values.get(3);

    this->init(new IntegerUiComponentType(x), new IntegerUiComponentType(y));
    this->size = new IntegerUiComponentType(size);
    this->text = new StringUiComponentType(text);
}

TextUiComponent::~TextUiComponent() {
    delete this->text;
    delete this->size;
}

void TextUiComponent::setSize(IntegerUiComponentType* size) {
    CharManipulation* cm = new CharManipulation();
    int isize = cm->findInt(size->getValue());
    delete cm;
    lv_obj_set_width(this->UIObject, isize);
    lv_obj_set_height(this->UIObject, isize);
    lv_obj_set_size(this->UIObject, isize, isize);
}

void TextUiComponent::executeSelf(ArrayList<UiComponent*>& components) {
    for (unsigned int i = 0; i < components.size(); i++) {}

    this->UIObject = lv_label_create(lv_scr_act(), nullptr);
    this->setSize(this->size);
    this->setCoords(this->x, this->y);
    lv_label_set_recolor(this->UIObject, true);
    lv_label_set_text_fmt(this->UIObject, this->text->getValue());
}

void TextUiComponent::update(const bool& shouldUpdate) {
    if (shouldUpdate) {

    }
}