#pragma once

#include "displayapp/screens/watchface/uicomponents/arithmetics/ArithmeticUiComponent.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class ForArithmeticUiComponent: public ArithmeticUiComponent {
            public:
              ForArithmeticUiComponent(const char*& values);
              virtual ~ForArithmeticUiComponent();

              virtual bool execute(const bool& shouldDraw, ColorComponent* color, ArrayList<UiComponent*>& components);
              int getIndex() const;
              const char* getIndexName() const;

            private:
              int start, end, increment;
              int index;
              const char* indexName;
          };
      }
    }
  }
}