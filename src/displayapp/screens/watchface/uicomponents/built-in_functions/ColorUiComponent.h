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
            ColorUiComponent(std::vector<std::string>& values);
            virtual ~ColorUiComponent();

            bool execute(const bool& shouldDraw, ColorComponent* color, std::vector<UiComponent*>& components);
            virtual void update(const bool& shouldUpdate);
            ColorComponent* getColor() const;

          private:
            /* VARIABLES */
            ColorComponent* color;
        };
      }
    }
  }
}