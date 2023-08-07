#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_functions/BuiltInFunctionUiComponent.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class CircleUiComponent: public BuiltInFunctionUiComponent {
            public:
              CircleUiComponent(ArrayList<const char*>& values);
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