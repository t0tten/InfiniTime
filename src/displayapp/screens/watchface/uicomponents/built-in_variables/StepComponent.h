#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_variables/VariableComponent.h"
#include <string>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class StepComponent: public VariableComponent {
            public:
              StepComponent(const UiType::TYPE& type);
              virtual ~StepComponent();
              virtual std::string getValue();
          };
      }
    }
  }
}