#pragma once

#include "displayapp/screens/watchface/watchfaceparser/types/UiType.h"
#include <string>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class ColorComponent {
            public:
              virtual ~ColorComponent();

              ColorComponent(std::string r, std::string g, std::string b);
              int getR();
              int getG();
              int getB();

            private:
              /* VARIABLES */
              std::string r, g, b;
          };
      }
    }
  }
}