#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_variables/VariableComponent.h"
#include "displayapp/screens/watchface/uicomponents/helpers/CharManipulation.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class DateComponent: public VariableComponent {
            public:
              DateComponent(const UiType::TYPE& type);
              virtual ~DateComponent();
              virtual const char* getValue();
            private:
              const char* fullYear;
              const char* year;
              const char* month;
              const char* day;

              const char* getDate() const;
              const char* getFullDate() const;
              const char* getFullYear() const;
              const char* getYear() const;
              const char* getMonth() const;
              const char* getDay() const;
          };
      }
    }
  }
}