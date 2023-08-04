#include "displayapp/screens/watchface/uicomponents/built-in_functions/ColorUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

ColorUiComponent::ColorUiComponent(std::vector<std::string>& values): UiComponent(UiType::COLOR) {
    this->color = new ColorComponent(values.at(0), values.at(1), values.at(2));
}

ColorUiComponent::~ColorUiComponent() {
    delete this->color;
}

bool ColorUiComponent::execute(const bool& shouldDraw, ColorComponent* color, std::vector<UiComponent*>& components) {
    if (shouldDraw) {
        if (color != nullptr) {
            components.size();
        }
    }
    return true;
}

void ColorUiComponent::update(const bool& shouldUpdate) {
    if (shouldUpdate) {}
 }

ColorComponent* ColorUiComponent::getColor() const { return this->color; }