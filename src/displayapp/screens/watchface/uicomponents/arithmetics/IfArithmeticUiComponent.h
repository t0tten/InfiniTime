#pragma once

#include "displayapp/screens/watchface/uicomponents/arithmetics/ArithmeticUiComponent.h"
#include "displayapp/screens/watchface/uicomponents/ui_components_types/UiComponentType.h"
#include "displayapp/screens/watchface/uicomponents/ui_components_types/StringUiComponentType.h"
#include "displayapp/screens/watchface/uicomponents/ui_components_types/IntegerUiComponentType.h"
#include "displayapp/screens/watchface/uicomponents/translators/TypeTranslator.h"
#include <string>
#include <vector>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class IfArithmeticUiComponent: public ArithmeticUiComponent {
            public:
              IfArithmeticUiComponent();
              IfArithmeticUiComponent(std::string& values);
              virtual ~IfArithmeticUiComponent();

              virtual bool execute(const bool& shouldDraw, ColorComponent* color, std::vector<UiComponent*>& components);
              void addIfComponent(IfArithmeticUiComponent* ifComponent);

            private:
              bool isExperssionTrue;
              std::string op;
              UiComponentType* component1;
              UiComponentType* component2;
              std::vector<IfArithmeticUiComponent*> ifComponents;

              /* FUNCTIONS */
              bool continueWithNextIfStatement(const bool& shouldDraw, ColorComponent* color, std::vector<UiComponent*>& components);
          };
      }
    }
  }
}