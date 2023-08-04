#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_variables/VariableComponent.h"
#include <string>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class BatteryComponent: public VariableComponent {
            public:
              BatteryComponent(const UiType::TYPE& type);
              virtual ~BatteryComponent();
              virtual std::string getValue();
          };
      }
    }
  }
}