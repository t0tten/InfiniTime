#pragma once

#include "displayapp/screens/watchface/watchfaceparser/types/UiType.h"
#include "displayapp/screens/watchface/uicomponents/built-in_functions/ColorComponent.h"
#include "displayapp/screens/watchface/uicomponents/helpers/ArrayList.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class UiComponent {
            public:
              virtual ~UiComponent();

              virtual bool execute(const bool& shouldDraw, ColorComponent* color, ArrayList<UiComponent*>& components) = 0;
              virtual void update(const bool& shouldUpdate) = 0;
              UiType::TYPE getType() const;

            protected:
              UiComponent(const UiType::TYPE& type);

            private:
              /* VARIBALES */
              UiType::TYPE type;
              
              /* FUNCTIONS */
              UiComponent();
          };
      }
    }
  }
}