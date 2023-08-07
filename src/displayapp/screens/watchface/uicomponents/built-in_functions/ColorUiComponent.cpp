#include "displayapp/screens/watchface/uicomponents/built-in_functions/ColorUiComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

ColorUiComponent::ColorUiComponent(ArrayList<const char*>& values): UiComponent(UiType::COLOR) {
    const char* r = values.get(0);
    const char* g = values.get(1);
    const char* b = values.get(2);
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