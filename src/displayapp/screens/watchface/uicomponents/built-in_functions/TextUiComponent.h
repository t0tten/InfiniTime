#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_functions/BuiltInFunctionUiComponent.h"
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
              virtual void execute(UiComponent* component);

            private:
              /* VARIABLES */
              std::string x, y;
              std::string thickness;
              std::string text;
              //VariableUiComponent* text;

              /* FUNCTIONS */
              TextUiComponent(UiType::TYPE type, std::string x, std::string y, std::string text);
          };
      }
    }
  }
}