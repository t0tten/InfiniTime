#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_functions/BuiltInFunctionUiComponent.h"
#include <string>
#include <vector>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class LineUiComponent: public BuiltInFunctionUiComponent {
            public:
              virtual ~LineUiComponent();

              static UiComponent* parseValues(std::vector<std::string> values);
              virtual void executeSelf(bool shouldDraw, std::vector<UiComponent*> components);
              virtual void update(bool shouldUpdate);

            private:
              /* VARIABLES */
              IntegerUiComponentType* xx;
              IntegerUiComponentType* yy;
              IntegerUiComponentType* thickness;

              /* FUNCTIONS */
              LineUiComponent(UiType::TYPE type, IntegerUiComponentType* x, IntegerUiComponentType* y, IntegerUiComponentType* xx, IntegerUiComponentType* yy, IntegerUiComponentType* thickness);
          };
      }
    }
  }
}