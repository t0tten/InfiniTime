#pragma once

#include <string>
#include <regex>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class TypeMatcher {
            public:
              virtual ~TypeMatcher();
              static bool validateInput(const std::string& value, std::string& regularExpression);

            private:
              TypeMatcher();
              
          };
      }
    }
  }
}