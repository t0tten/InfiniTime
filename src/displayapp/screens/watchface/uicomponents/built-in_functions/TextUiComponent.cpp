#include "displayapp/screens/watchface/uicomponents/built-in_functions/TextUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

TextUiComponent::TextUiComponent(std::vector<std::string>& values): BuiltInFunctionUiComponent(UiType::TEXT,
                                                                    new IntegerUiComponentType(values.at(0)),
                                                                    new IntegerUiComponentType(values.at(1)))
{
    this->size = new IntegerUiComponentType(values.at(2));
    this->text = new StringUiComponentType(values.at(3));
}

TextUiComponent::~TextUiComponent() {
    delete this->text;
    delete this->size;
}

void TextUiComponent::setSize(IntegerUiComponentType* size) {
    int isize = std::stoi(size->getValue());
    lv_obj_set_width(this->UIObject, isize);
    lv_obj_set_height(this->UIObject, isize);
    lv_obj_set_size(this->UIObject, isize, isize);
}

void TextUiComponent::executeSelf(const std::vector<UiComponent*>& components) {
    for (unsigned int i = 0; i < components.size(); i++) {}

    this->UIObject = lv_label_create(lv_scr_act(), nullptr);
    this->setSize(this->size);
    this->setCoords(this->x, this->y);
    lv_label_set_recolor(this->UIObject, true);
    lv_label_set_text_fmt(this->UIObject, this->text->getValue().c_str());
}

void TextUiComponent::update(const bool& shouldUpdate) {
    if (shouldUpdate) {

    }
}