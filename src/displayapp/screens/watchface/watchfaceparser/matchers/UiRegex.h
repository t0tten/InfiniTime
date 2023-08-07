#pragma once

#include "displayapp/screens/watchface/watchfaceparser/types/UiType.h"
#include "displayapp/screens/watchface/uicomponents/helpers/CharManipulation.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
        class UiRegex {
        private:
            UiType::TYPE type;
            char* prefixRegex;
            char* infixRegex;
            char* suffixRegex;

        public:
            UiRegex(const UiType::TYPE& type, char*& prefixRegex, char*& infixRegex,  char*& suffixRegex);
            ~UiRegex();

            UiType::TYPE getType() const;
            char* getPrefixRegex() const;
            char* getInfixRegex() const;
            char* getSuffixRegex() const;
            char* getCompleteRegex() const;
        };
      }
    }
  }
}