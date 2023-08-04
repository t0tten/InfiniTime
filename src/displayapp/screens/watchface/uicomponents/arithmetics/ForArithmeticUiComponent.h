#pragma once

#include "displayapp/screens/watchface/uicomponents/arithmetics/ArithmeticUiComponent.h"
#include <string>
#include <vector>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class ForArithmeticUiComponent: public ArithmeticUiComponent {
            public:
              ForArithmeticUiComponent(std::string& values);
              virtual ~ForArithmeticUiComponent();

              virtual bool execute(const bool& shouldDraw, ColorComponent* color, std::vector<UiComponent*>& components);
              int getIndex() const;
              std::string getIndexName() const;

            private:
              int start, end, increment;
              int index;
              std::string indexName;
          };
      }
    }
  }
}