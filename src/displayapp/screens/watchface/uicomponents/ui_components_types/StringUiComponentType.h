#pragma once

#include "displayapp/screens/watchface/uicomponents/ui_components_types/UiComponentType.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class StringUiComponentType: public UiComponentType {
            public:
              StringUiComponentType(std::string& data);
              virtual ~StringUiComponentType();
              
              virtual std::string getValue() const;
          };
      }
    }
  }
}