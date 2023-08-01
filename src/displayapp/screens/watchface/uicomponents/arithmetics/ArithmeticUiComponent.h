#pragma once

#include "displayapp/screens/watchface/uicomponents/UiComponent.h"
#include "displayapp/screens/watchface/uicomponents/built-in_functions/ColorUiComponent.h"
#include <string>
#include <vector>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class ArithmeticUiComponent: public UiComponent {
            public:
              virtual ~ArithmeticUiComponent();

              virtual bool execute(bool shouldDraw, ColorComponent* color, std::vector<UiComponent*> components);
              virtual void update(bool shouldUpdate);
              void executeCodeBlock(bool shouldDraw, ColorComponent* color, std::vector<UiComponent*> components);

              void addCodeBlockComponent(UiComponent* component);
              static ArithmeticUiComponent* empty();

            protected:
              std::vector<UiComponent*> codeBlock;

              ArithmeticUiComponent(UiType::TYPE type);

          };
      }
    }
  }
}