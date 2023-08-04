#pragma once

#include "displayapp/screens/watchface/watchfaceparser/types/UiType.h"
#include <string>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class VariableComponent {
            public:
              virtual ~VariableComponent();
              UiType::TYPE getType() const;
              virtual std::string getValue() = 0;
              
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