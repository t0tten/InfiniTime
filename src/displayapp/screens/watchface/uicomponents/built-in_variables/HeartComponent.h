#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_variables/VariableComponent.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class HeartComponent: public VariableComponent {
            public:
              HeartComponent(const UiType::TYPE& type);
              virtual ~HeartComponent();
              virtual const char* getValue();
          };
      }
    }
  }
}