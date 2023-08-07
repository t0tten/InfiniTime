#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_functions/BuiltInFunctionUiComponent.h"
#include <string>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class LineUiComponent: public BuiltInFunctionUiComponent {
            public:
              LineUiComponent(ArrayList<std::string>& values);
              virtual ~LineUiComponent();

              virtual void executeSelf(ArrayList<UiComponent*>& components);
              virtual void update(const bool& shouldUpdate);

            private:
              /* VARIABLES */
              IntegerUiComponentType* xx;
              IntegerUiComponentType* yy;
              IntegerUiComponentType* thickness;
          };
      }
    }
  }
}