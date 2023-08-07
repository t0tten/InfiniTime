#include "displayapp/screens/watchface/uicomponents/built-in_functions/ColorComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

ColorComponent::ColorComponent(const char*& r, const char*& g, const char*& b) {
    this->r = r;
    this->g = g;
    this->b = b;
}

ColorComponent::~ColorComponent() {}

int ColorComponent::getR() const {
     return this->getValue(this->r);
}
int ColorComponent::getG() const {
     return this->getValue(this->g);
}
int ColorComponent::getB() const { 
    return this->getValue(this->b);
}

int ColorComponent::getValue(const char* val) const {
    CharManipulation* cm = new CharManipulation();
    int value = cm->findInt(val);
    delete cm;
    return value;
}