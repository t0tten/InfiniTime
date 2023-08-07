#pragma once

#include "displayapp/screens/watchface/watchfaceparser/types/UiType.h"
#include "displayapp/screens/watchface//uicomponents/UiComponent.h"
#include "displayapp/screens/watchface//uicomponents/built-in_functions/ColorComponent.h"
#include <string>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
        class ColorUiComponent: public UiComponent {
          public:
            ColorUiComponent(ArrayList<std::string>& values);
            virtual ~ColorUiComponent();

            bool execute(const bool& shouldDraw, ColorComponent* color, ArrayList<UiComponent*>& components);
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