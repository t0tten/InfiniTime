#pragma once

#include "displayapp/screens/watchface/watchfaceparser/types/UiType.h"
#include <string>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class ColorComponent {
            public:
              ColorComponent(std::string& r, std::string& g, std::string& b);
              virtual ~ColorComponent();

              int getR() const;
              int getG() const;
              int getB() const;

            private:
              /* VARIABLES */
              std::string r, g, b;
          };
      }
    }
  }
}