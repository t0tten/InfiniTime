#include "displayapp/screens/watchface/uicomponents/built-in_functions/TextUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

TextUiComponent::TextUiComponent(UiType::TYPE type, std::string x, std::string y, std::string text): BuiltInFunctionUiComponent(type, x, y) {
    this->text = text;
    lv_label_set_recolor(this->UIObject, true);
}

TextUiComponent::~TextUiComponent() {}

void TextUiComponent::execute(UiComponent* component) {
    if (component != nullptr) {}

    lv_label_set_text_static(this->UIObject, this->text.c_str());
}

UiComponent* TextUiComponent::parseValues(std::vector<std::string> values) {
    values.empty();
    return new TextUiComponent(UiType::TEXT, "10", "10", "Test string");
}