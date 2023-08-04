#pragma once

#include "displayapp/screens/watchface/uicomponents/ui_components_types/UiComponentType.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class BooleanUiComponentType: public UiComponentType {
            public:
              virtual ~BooleanUiComponentType();
              BooleanUiComponentType(std::string& data);
              virtual std::string getValue() const;
          };
      }
    }
  }
}