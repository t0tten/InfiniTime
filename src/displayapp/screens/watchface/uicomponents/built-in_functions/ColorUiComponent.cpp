#include "displayapp/screens/watchface/uicomponents/built-in_functions/ColorUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

ColorUiComponent::ColorUiComponent(ArrayList<std::string>& values): UiComponent(UiType::COLOR) {
    std::string r = values.get(0);
    std::string g = values.get(1);
    std::string b = values.get(2);
    this->color = new ColorComponent(r, g, b);
}

ColorUiComponent::~ColorUiComponent() {
    delete this->color;
}

bool ColorUiComponent::execute(const bool& shouldDraw, ColorComponent* color, ArrayList<UiComponent*>& components) {
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