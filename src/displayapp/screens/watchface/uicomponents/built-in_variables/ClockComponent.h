#pragma once

#include "displayapp/screens/watchface/uicomponents/built-in_variables/VariableComponent.h"
#include <string>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class ClockComponent: public VariableComponent {
            public:
              ClockComponent(const UiType::TYPE& type);
              virtual ~ClockComponent();
              virtual std::string getValue();

            private:
              std::string hours, minutes, seconds;

              std::string getHours() const;
              std::string getMinutes() const;
              std::string getSeconds() const;
              std::string getFullTime() const;
              std::string getTime() const;
          };
      }
    }
  }
}