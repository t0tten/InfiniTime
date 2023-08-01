#pragma once

#include "displayapp/screens/watchface/watchfaceparser/types/UiType.h"
#include <string>
#include <vector>
#include <regex>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class UiComponentType {
            public:
              virtual ~UiComponentType();
              UiType::TYPE getType();
              virtual std::string getValue() = 0;
              
            protected:
              std::string data;
              UiComponentType(UiType::TYPE type, std::string data);
              UiComponentType* translateToVariable(UiType::TYPE type);

            private:
              /* VARIABLES */
              UiType::TYPE type;
          };
      }
    }
  }
}