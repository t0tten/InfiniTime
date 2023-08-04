#pragma once

#include "displayapp/screens/watchface/watchfaceparser/types/UiType.h"
#include <string>
#include <vector>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class UiComponentType {
            public:
              virtual ~UiComponentType();
              UiType::TYPE getType() const;
              virtual std::string getValue() const = 0;
              std::string getRegularExpression();
              
            protected:
              std::vector<std::string> regex;
              std::string data;
              UiComponentType(const UiType::TYPE& type, std::string& data);

            private:
              UiType::TYPE type;
          };
      }
    }
  }
}