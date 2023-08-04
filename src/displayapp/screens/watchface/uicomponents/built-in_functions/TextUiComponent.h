#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_functions/BuiltInFunctionUiComponent.h"
#include "displayapp/screens/watchface/uicomponents/ui_components_types/StringUiComponentType.h"
#include <string>
#include <vector>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class TextUiComponent: public BuiltInFunctionUiComponent {
            public:
              TextUiComponent(std::vector<std::string>& values);
              virtual ~TextUiComponent();

              virtual void executeSelf(const std::vector<UiComponent*>& components);
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