#pragma once

#include "displayapp/screens/watchface/uicomponents/ui_components_types/UiComponentType.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class StringUiComponentType: public UiComponentType {
            public:
              virtual ~StringUiComponentType();
              static StringUiComponentType* validate(std::string data);
              virtual std::string getValue();

              static std::string getRegularExpression();
            private:
              StringUiComponentType(UiType::TYPE type, std::string data);
              static std::vector<std::string> getRegularExpressionVector();
          };
      }
    }
  }
}