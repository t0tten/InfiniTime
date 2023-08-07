#pragma once

#include "displayapp/screens/watchface/watchfaceparser/types/UiType.h"
#include "displayapp/screens/watchface//uicomponents/helpers/CharManipulation.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class ColorComponent {
            public:
              ColorComponent(const char*& r, const char*& g, const char*& b);
              virtual ~ColorComponent();

              int getR() const;
              int getG() const;
              int getB() const;

            private:
              /* VARIABLES */
              const char* r;
              const char* g;
              const char* b;

              int getValue(const char* val) const;
          };
      }
    }
  }
}