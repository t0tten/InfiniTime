#pragma once

#include "displayapp/screens/watchface/watchfaceparser/types/UiType.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class VariableComponent {
            public:
              virtual ~VariableComponent();
              UiType::TYPE getType() const;
              virtual const char* getValue() = 0;
              
            protected:
              VariableComponent(const UiType::TYPE& type);

            private:
              /* VARIABLES */
              UiType::TYPE type;
          };
      }
    }
  }
}