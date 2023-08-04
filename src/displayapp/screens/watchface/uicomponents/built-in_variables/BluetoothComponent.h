#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_variables/VariableComponent.h"
#include <string>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class BluetoothComponent: public VariableComponent {
            public:
              BluetoothComponent(const UiType::TYPE& type);
              virtual ~BluetoothComponent();
              virtual std::string getValue();
          };
      }
    }
  }
}