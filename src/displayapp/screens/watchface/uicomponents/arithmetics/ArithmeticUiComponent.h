#pragma once

#include "displayapp/screens/watchface/uicomponents/UiComponent.h"
#include "displayapp/screens/watchface/uicomponents/built-in_functions/ColorUiComponent.h"
#include <string>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class ArithmeticUiComponent: public UiComponent {
            public:
              ArithmeticUiComponent();
              virtual ~ArithmeticUiComponent();

              virtual bool execute(const bool& shouldDraw, ColorComponent* color, ArrayList<UiComponent*>& components);
              virtual void update(const bool& shouldUpdate);
              void executeCodeBlock(const bool& shouldDraw, ColorComponent* color, ArrayList<UiComponent*>& components);
              void addCodeBlockComponent(UiComponent* component);

            protected:
              ArrayList<UiComponent*> codeBlock;

              ArithmeticUiComponent(const UiType::TYPE& type);
          };
      }
    }
  }
}