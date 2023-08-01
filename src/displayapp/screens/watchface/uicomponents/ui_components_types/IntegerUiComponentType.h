#pragma once

#include "displayapp/screens/watchface/uicomponents/ui_components_types/UiComponentType.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class IntegerUiComponentType: public UiComponentType {
            public:
              virtual ~IntegerUiComponentType();
              static IntegerUiComponentType* validate(std::string data);
              virtual std::string getValue();

              static std::string getRegularExpression();

            private:
              IntegerUiComponentType(UiType::TYPE type, std::string data);
              static std::vector<std::string> getRegularExpressionVector();
          };
      }
    }
  }
}