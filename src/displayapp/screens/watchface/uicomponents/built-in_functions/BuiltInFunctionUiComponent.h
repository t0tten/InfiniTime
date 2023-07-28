#pragma once

#include "displayapp/screens/watchface/uicomponents/UiComponent.h"
#include <lvgl/src/lv_core/lv_obj.h>
#include <lvgl/lvgl.h>
#include <string>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class BuiltInFunctionUiComponent: public UiComponent {
            public:
              virtual ~BuiltInFunctionUiComponent();
              virtual void execute(UiComponent* component) = 0;

            protected:
              /* VARIABLES */
              lv_obj_t* UIObject;
              std::string x, y;

              /* FUNCTIONS */
              BuiltInFunctionUiComponent(UiType::TYPE type, std::string x, std::string y);
              void setCoords(std::string x, std::string y);
          };
      }
    }
  }
}