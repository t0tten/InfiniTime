#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_functions/BuiltInFunctionUiComponent.h"
#include "displayapp/screens/watchface/uicomponents/ui_components_types/StringUiComponentType.h"
#include <string>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class TextUiComponent: public BuiltInFunctionUiComponent {
            public:
              TextUiComponent(ArrayList<std::string>& values);
              virtual ~TextUiComponent();

              virtual void executeSelf(ArrayList<UiComponent*>& components);
              virtual void update(const bool& shouldUpdate);

            private:
              /* VARIABLES */
              StringUiComponentType* text;
              IntegerUiComponentType* size;

              /* FUNCTIONS */
              void setSize(IntegerUiComponentType* size);
          };
      }
    }
  }
}