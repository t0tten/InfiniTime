#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_variables/VariableComponent.h"
#include <string>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class DateComponent: public VariableComponent {
            public:
              DateComponent(const UiType::TYPE& type);
              virtual ~DateComponent();
              virtual std::string getValue();
            private:
              std::string fullYear, year, month, day;

              std::string getDate() const;
              std::string getFullDate() const;
              std::string getFullYear() const;
              std::string getYear() const;
              std::string getMonth() const;
              std::string getDay() const;
          };
      }
    }
  }
}