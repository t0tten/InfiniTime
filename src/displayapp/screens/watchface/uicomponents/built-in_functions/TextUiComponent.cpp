#include "displayapp/screens/watchface/uicomponents/built-in_functions/TextUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

TextUiComponent::TextUiComponent(UiType::TYPE type, IntegerUiComponentType* x, IntegerUiComponentType* y, IntegerUiComponentType* size, StringUiComponentType* text): BuiltInFunctionUiComponent(type, x, y) {
    this->size = size;
    this->text = text;
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

void TextUiComponent::executeSelf(bool shouldDraw, std::vector<UiComponent*> components) {
    if (shouldDraw) {
        for (unsigned int i = 0; i < components.size(); i++) {}

        if (this->UIObject == nullptr) {
            this->UIObject = lv_label_create(lv_scr_act(), nullptr);
            this->setSize(this->size);
            this->setCoords(this->x, this->y);
            lv_label_set_recolor(this->UIObject, true);
            lv_label_set_text_fmt(this->UIObject, this->text->getValue().c_str());
        } else {
            // Show
        }
    } else {
        if (this->UIObject != nullptr) {
            // Hide
        }
    }
}

void TextUiComponent::update(bool shouldUpdate) {
    if (shouldUpdate) {

    }
}

UiComponent* TextUiComponent::parseValues(std::vector<std::string> values) {
    IntegerUiComponentType* x = IntegerUiComponentType::validate(values.at(0));
    IntegerUiComponentType* y = IntegerUiComponentType::validate(values.at(1));
    IntegerUiComponentType* size = IntegerUiComponentType::validate(values.at(2));
    StringUiComponentType* text = StringUiComponentType::validate(values.at(3));
    return new TextUiComponent(UiType::TEXT, x, y, size, text);
}