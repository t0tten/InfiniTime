#pragma once

#include "displayapp/screens/watchface/uicomponents/UiComponent.h"
#include "displayapp/screens/watchface/uicomponents/built-in_functions/ColorComponent.h"
#include "displayapp/screens/watchface/uicomponents/ui_components_types/IntegerUiComponentType.h"
#include <lvgl/src/lv_core/lv_obj.h>
#include <lvgl/lvgl.h>
#include <string>
#include <vector>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace { 
          class BuiltInFunctionUiComponent: public UiComponent {
            public:
              virtual ~BuiltInFunctionUiComponent();
              virtual bool execute(const bool& shouldDraw, ColorComponent* color, std::vector<UiComponent*>& components);
              virtual void executeSelf(const std::vector<UiComponent*>& components) = 0;
              virtual void update(const bool& shouldUpdate) = 0;

            protected:
              /* VARIABLES */
              lv_obj_t* UIObject;
              IntegerUiComponentType* x;
              IntegerUiComponentType* y;

              /* FUNCTIONS */
              BuiltInFunctionUiComponent(const UiType::TYPE& type, IntegerUiComponentType* x, IntegerUiComponentType* y);
              void setCoords(IntegerUiComponentType* x, IntegerUiComponentType* y);
          };
      }
    }
  }
}