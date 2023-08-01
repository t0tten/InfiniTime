#include "displayapp/screens/watchface/uicomponents/built-in_functions/ColorComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

ColorComponent::ColorComponent(std::string r, std::string g, std::string b) {
    this->r = r;
    this->g = g;
    this->b = b;
}

ColorComponent::~ColorComponent() {}

int ColorComponent::getR() { return std::stoi(this->r); }
int ColorComponent::getG() { return std::stoi(this->g); }
int ColorComponent::getB() { return std::stoi(this->b); }