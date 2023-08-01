#pragma once

#include "displayapp/screens/watchface/watchfaceparser/types/UiType.h"
#include "displayapp/screens/watchface//uicomponents/UiComponent.h"
#include "displayapp/screens/watchface//uicomponents/built-in_functions/ColorComponent.h"
#include <vector>
#include <string>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class ColorUiComponent: public UiComponent {
            public:
              virtual ~ColorUiComponent();

              static UiComponent* parseValues(std::vector<std::string> values);

              bool execute(bool shouldDraw, ColorComponent* color, std::vector<UiComponent*> components);
              virtual void update(bool shouldUpdate);
              ColorComponent* getColor();

            private:
              /* VARIABLES */
              ColorComponent* color;

              /* FUNCTIONS */
              ColorUiComponent(UiType::TYPE type, std::string r, std::string g, std::string b);
          };
      }
    }
  }
}