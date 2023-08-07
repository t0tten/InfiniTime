#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_variables/VariableComponent.h"
#include "displayapp/screens/watchface/uicomponents/helpers/CharManipulation.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class ClockComponent: public VariableComponent {
            public:
              ClockComponent(const UiType::TYPE& type);
              virtual ~ClockComponent();
              virtual const char* getValue();

            private:
              const char* hours;
              const char* minutes;
              const char* seconds;

              const char* getHours() const;
              const char* getMinutes() const;
              const char* getSeconds() const;
              const char* getFullTime() const;
              const char* getTime() const;
          };
      }
    }
  }
}