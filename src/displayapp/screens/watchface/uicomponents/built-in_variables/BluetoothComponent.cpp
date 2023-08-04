#include "displayapp/screens/watchface/uicomponents/built-in_variables/BluetoothComponent.h"

using namespace Pinetime::Applications::Screens::WatchFace;

BluetoothComponent::BluetoothComponent(const UiType::TYPE& type): VariableComponent(type) {}
BluetoothComponent::~BluetoothComponent() {}
std::string BluetoothComponent::getValue() {
    std::string isConnected = "true";
    return isConnected;
}