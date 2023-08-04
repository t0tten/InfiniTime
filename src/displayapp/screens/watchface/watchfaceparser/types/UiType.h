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
                BOOLEAN,        // 17
                HEART,          // 18
                BT,             // 19
                DATE,           // 20
                DATE_FULL,      // 21
                DATE_FULL_YEAR, // 22
                DATE_YEAR,      // 23
                DATE_MONTH,     // 24
                DATE_DAY,       // 25
                STEPS,          // 26
                BATT,           // 27
                INDEX           // 28
              } TYPE;
          };
      }
    }
  }
}