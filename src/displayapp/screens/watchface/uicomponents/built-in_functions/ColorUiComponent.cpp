#include "displayapp/screens/watchface/uicomponents/built-in_functions/ColorUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

ColorUiComponent::ColorUiComponent(UiType::TYPE type, std::string r, std::string g, std::string b): UiComponent(type) {
    this->color = new ColorComponent(r, g, b);
}

ColorUiComponent::~ColorUiComponent() {
    delete this->color;
}

bool ColorUiComponent::execute(bool shouldDraw, ColorComponent* color, std::vector<UiComponent*> components) {
    if (shouldDraw) {
        if (color != nullptr) {
            components.size();
        }
    }
    return true;
}

void ColorUiComponent::update(bool shouldUpdate) {
    if (shouldUpdate) {}
 }

ColorComponent* ColorUiComponent::getColor() { return this->color; }

UiComponent* ColorUiComponent::parseValues(std::vector<std::string> values) {
    return new ColorUiComponent(UiType::COLOR, values.at(0), values.at(1), values.at(2));
}