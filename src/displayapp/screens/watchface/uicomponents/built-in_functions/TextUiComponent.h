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
              virtual ~TextUiComponent();

              static UiComponent* parseValues(std::vector<std::string> values);
              virtual void executeSelf(bool shouldDraw, std::vector<UiComponent*> components);
              virtual void update(bool shouldUpdate);

            private:
              /* VARIABLES */
              StringUiComponentType* text;
              IntegerUiComponentType* size;

              /* FUNCTIONS */
              TextUiComponent(UiType::TYPE type, IntegerUiComponentType* x, IntegerUiComponentType* y, IntegerUiComponentType* size, StringUiComponentType* text);
              void setSize(IntegerUiComponentType* size);
          };
      }
    }
  }
}