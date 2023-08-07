#pragma once

#include "displayapp/screens/watchface/uicomponents/ui_components_types/UiComponentType.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class StringUiComponentType: public UiComponentType {
            public:
              StringUiComponentType(const char*& data);
              virtual ~StringUiComponentType();
              
              virtual const char* getValue() const;
          };
      }
    }
  }
}