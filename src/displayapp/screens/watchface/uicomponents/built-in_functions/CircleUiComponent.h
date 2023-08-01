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
              virtual ~CircleUiComponent();

              static UiComponent* parseValues(std::vector<std::string> values);
              virtual void executeSelf(bool shouldDraw, std::vector<UiComponent*> components);
              virtual void update(bool shouldUpdate);

            private:
              /* VARIABLES */
              IntegerUiComponentType* radius;

              /* FUNCTIONS */
              CircleUiComponent(UiType::TYPE type, IntegerUiComponentType* x, IntegerUiComponentType* y, IntegerUiComponentType* radius);
          };
      }
    }
  }
}