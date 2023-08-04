#pragma once

#include "displayapp/screens/watchface/watchfaceparser/types/UiType.h"
#include <string>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
        class UiRegex {
        private:
            UiType::TYPE type;
            std::string prefixRegex, infixRegex, suffixRegex;

        public:
            UiRegex(const UiType::TYPE& type, std::string& prefixRegex, std::string& infixRegex,  std::string& suffixRegex);
            ~UiRegex();

            UiType::TYPE getType() const;
            std::string getPrefixRegex() const;
            std::string getInfixRegex() const;
            std::string getSuffixRegex() const;
            std::string getCompleteRegex() const;
        };
      }
    }
  }
}