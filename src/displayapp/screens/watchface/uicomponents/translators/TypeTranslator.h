#pragma once

#include "displayapp/screens/watchface/watchfaceparser/types/UiType.h"

#include "displayapp/screens/watchface/uicomponents/built-in_variables/VariableComponent.h"
#include "displayapp/screens/watchface/uicomponents/built-in_variables/BatteryComponent.h"
#include "displayapp/screens/watchface/uicomponents/built-in_variables/BluetoothComponent.h"
#include "displayapp/screens/watchface/uicomponents/built-in_variables/ClockComponent.h"
#include "displayapp/screens/watchface/uicomponents/built-in_variables/DateComponent.h"
#include "displayapp/screens/watchface/uicomponents/built-in_variables/HeartComponent.h"
#include "displayapp/screens/watchface/uicomponents/built-in_variables/StepComponent.h"

#include "displayapp/screens/watchface/uicomponents/ui_components_types/UiComponentType.h"
#include "displayapp/screens/watchface/uicomponents/ui_components_types/StringUiComponentType.h"
#include "displayapp/screens/watchface/uicomponents/ui_components_types/IntegerUiComponentType.h"
#include "displayapp/screens/watchface/uicomponents/ui_components_types/BooleanUiComponentType.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class TypeTranslator {
            public:
              UiComponentType* translateTypeToComponent(const UiType::TYPE& type, std::string& value) const;
              VariableComponent* translateVariableToComponent(const UiType::TYPE& type) const;
          };
      }
    }
  }
}