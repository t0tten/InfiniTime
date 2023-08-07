#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_functions/BuiltInFunctionUiComponent.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class RectangleUiComponent: public BuiltInFunctionUiComponent {
            public:
              RectangleUiComponent(ArrayList<const char*>& values);
              virtual ~RectangleUiComponent();

              virtual void executeSelf(ArrayList<UiComponent*>& components);
              virtual void update(const bool& shouldUpdate);

            private:
              /* VARIABLES */
              IntegerUiComponentType* xx;
              IntegerUiComponentType* yy;
          };
      }
    }
  }
}