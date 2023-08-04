#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_functions/BuiltInFunctionUiComponent.h"
#include <string>
#include <vector>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class CircleUiComponent: public BuiltInFunctionUiComponent {
            public:
              CircleUiComponent(std::vector<std::string>& values);
              virtual ~CircleUiComponent();

              virtual void executeSelf(const std::vector<UiComponent*>& components);
              virtual void update(const bool& shouldUpdate);

            private:
              /* VARIABLES */
              IntegerUiComponentType* radius;
          };
      }
    }
  }
}