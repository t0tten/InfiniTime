#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_functions/BuiltInFunctionUiComponent.h"
#include <string>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class CircleUiComponent: public BuiltInFunctionUiComponent {
            public:
              CircleUiComponent(ArrayList<std::string>& values);
              virtual ~CircleUiComponent();

              virtual void executeSelf(ArrayList<UiComponent*>& components);
              virtual void update(const bool& shouldUpdate);

            private:
              /* VARIABLES */
              IntegerUiComponentType* radius;
          };
      }
    }
  }
}