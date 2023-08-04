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
              ArithmeticUiComponent();
              virtual ~ArithmeticUiComponent();

              virtual bool execute(const bool& shouldDraw, ColorComponent* color, std::vector<UiComponent*>& components);
              virtual void update(const bool& shouldUpdate);
              void executeCodeBlock(const bool& shouldDraw, ColorComponent* color, std::vector<UiComponent*>& components);
              void addCodeBlockComponent(UiComponent* component);

            protected:
              std::vector<UiComponent*> codeBlock;

              ArithmeticUiComponent(const UiType::TYPE& type);
          };
      }
    }
  }
}