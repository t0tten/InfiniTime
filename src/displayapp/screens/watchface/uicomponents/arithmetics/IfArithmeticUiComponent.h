#pragma once

#include "displayapp/screens/watchface/uicomponents/arithmetics/ArithmeticUiComponent.h"
#include "displayapp/screens/watchface/uicomponents/ui_components_types/UiComponentType.h"
#include "displayapp/screens/watchface/uicomponents/ui_components_types/StringUiComponentType.h"
#include "displayapp/screens/watchface/uicomponents/ui_components_types/IntegerUiComponentType.h"
#include <string>
#include <vector>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class IfArithmeticUiComponent: public ArithmeticUiComponent {
            public:
              virtual ~IfArithmeticUiComponent();

              virtual bool execute(bool shouldDraw, ColorComponent* color, std::vector<UiComponent*> components);
              void addIfComponent(IfArithmeticUiComponent* ifComponent);
              static IfArithmeticUiComponent* parseValues(std::string values);
              static IfArithmeticUiComponent* emptyValues();
              static UiComponentType* translateToVariable(UiType::TYPE type, std::string value);

            private:
              bool isExperssionTrue;
              std::string op;
              UiComponentType* component1;
              UiComponentType* component2;
              std::vector<IfArithmeticUiComponent*> ifComponents;

              /* FUNCTIONS */
              IfArithmeticUiComponent(UiType::TYPE type, std::string op, UiComponentType* component1, UiComponentType* component2);
              bool continueWithNextIfStatement(bool shouldDraw, ColorComponent* color, std::vector<UiComponent*> components);
          };
      }
    }
  }
}