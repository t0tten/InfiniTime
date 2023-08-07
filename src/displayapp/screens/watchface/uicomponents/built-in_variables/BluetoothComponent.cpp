#include "displayapp/screens/watchface/uicomponents/built-in_variables/BluetoothComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

BluetoothComponent::BluetoothComponent(const UiType::TYPE& type): VariableComponent(type) {}
BluetoothComponent::~BluetoothComponent() {}
const char* BluetoothComponent::getValue() {
    const char* isConnected = "true";
    return isConnected;
}