#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_functions/TextUiComponent.h"
#include "displayapp/screens/watchface/uicomponents/built-in_functions/RectangleUiComponent.h"
#include "displayapp/screens/watchface/uicomponents/built-in_functions/LineUiComponent.h"
#include "displayapp/screens/watchface/uicomponents/built-in_functions/CircleUiComponent.h"
#include "displayapp/screens/watchface/uicomponents/built-in_functions/ColorComponent.h"
#include "displayapp/screens/watchface/uicomponents/built-in_functions/ColorUiComponent.h"
#include "displayapp/screens/watchface/uicomponents/arithmetics/ArithmeticUiComponent.h"
#include "displayapp/screens/watchface/uicomponents/arithmetics/IfArithmeticUiComponent.h"
#include "displayapp/screens/watchface/uicomponents/UiComponent.h"
#include "displayapp/screens/Screen.h"
#include <lvgl/src/lv_core/lv_obj.h>
#include <lvgl/lvgl.h>
#include <vector>
#include <string>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
        class WatchFaceCustom : public Screen {
        public:
          WatchFaceCustom();
          ~WatchFaceCustom();

          void Refresh();

        private:
          std::vector<UiComponent*> components;
          ArithmeticUiComponent* root;
          //UiComponent* component;

          lv_task_t* taskRefresh;
        };
      }
    }
  }
}
