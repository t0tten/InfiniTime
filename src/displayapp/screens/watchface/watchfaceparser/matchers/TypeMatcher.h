#pragma once

#include <regex>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class TypeMatcher {
            public:
              virtual ~TypeMatcher();
              static bool validateInput(const char*& value, char*& regularExpression);

            private:
              TypeMatcher();
              
          };
      }
    }
  }
}