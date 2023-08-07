#include "displayapp/screens/watchface/uicomponents/built-in_variables/StepComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

StepComponent::StepComponent(const UiType::TYPE& type): VariableComponent(type) {}
StepComponent::~StepComponent() {}
const char* StepComponent::getValue() {
    const char* steps = "2758";
    return steps;
}