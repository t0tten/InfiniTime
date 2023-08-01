#pragma once

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class UiType {
            public:
              typedef enum TYPE {
                NOOP = -2,              
                MISSING = -1,
                IF,             // 0
                ELSE_IF,        // 1
                ELSE,           // 2
                FOR,            // 3
                ARI_END,        // 4
                LINE,           // 5
                CIRCLE,         // 6
                TEXT,           // 7
                RECTANGLE,      // 8
                COLOR,          // 9
                CLOCK,          // 10
                CLOCK_FULL,     // 11
                CLOCK_HOUR,     // 12
                CLOCK_MIN,      // 13
                CLOCK_SEC,      // 14
                STRING,         // 15
                INTEGER,        // 16
                BOOLEAN_TRUE,   // 17
                BOOLEAN_FALSE,  // 18
                HEART,          // 19
                BT,             // 20
                DATE,           // 21
                DATE_FULL,      // 22
                DATE_FULL_YEAR, // 23
                DATE_YEAR,      // 24
                DATE_MONTH,     // 25
                DATE_DAY,       // 26
                STEPS,          // 27
                BATT,           // 28
                INDEX           // 29
              } TYPE;
          };
      }
    }
  }
}