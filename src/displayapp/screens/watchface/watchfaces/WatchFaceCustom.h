#pragma once

#include "displayapp/screens/Screen.h"
#include "displayapp/screens/watchface/uicomponents/UiComponent.h"
#include "displayapp/screens/watchface/uicomponents/built-in_functions/TextUiComponent.h"
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
          UiComponent* root;
          lv_task_t* taskRefresh;
        };
      }
    }
  }
}
