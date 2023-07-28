#pragma once

#include "displayapp/screens/watchface/watchfaceparser/types/UiType.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class UiComponent {
            public:
              virtual ~UiComponent();

              virtual void execute(UiComponent* component) = 0;

            protected:
              UiComponent(UiType::TYPE type);

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