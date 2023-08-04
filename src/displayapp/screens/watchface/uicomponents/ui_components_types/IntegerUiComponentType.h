#pragma once

#include "displayapp/screens/watchface/uicomponents/ui_components_types/UiComponentType.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class IntegerUiComponentType: public UiComponentType {
            public:
              IntegerUiComponentType(std::string& data);
              virtual ~IntegerUiComponentType();
              
              virtual std::string getValue() const;
          };
      }
    }
  }
}