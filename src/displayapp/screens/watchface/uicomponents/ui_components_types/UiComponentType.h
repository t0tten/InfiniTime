#pragma once

#include "displayapp/screens/watchface/watchfaceparser/types/UiType.h"
#include "displayapp/screens/watchface/uicomponents/helpers/ArrayList.h"
#include "displayapp/screens/watchface/uicomponents/helpers/CharManipulation.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class UiComponentType {
            public:
              virtual ~UiComponentType();
              UiType::TYPE getType() const;
              virtual const char* getValue() const = 0;
              const char* getRegularExpression() const;
              
            protected:
              ArrayList<const char*> regex;
              const char* data;
              UiComponentType(const UiType::TYPE& type, const char*& data);

            private:
              UiType::TYPE type;
          };
      }
    }
  }
}