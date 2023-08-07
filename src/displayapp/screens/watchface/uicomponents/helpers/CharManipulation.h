#pragma once

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          class CharManipulation {
            public:
              char* concat(const char* arr1, const char* arr2) {
                int arr1_len = 0;
                if(arr1 != nullptr) {
                    arr1_len = this->length(arr1);
                }
                int arr2_len = this->length(arr2);

                int newLen = arr1_len + arr2_len; 
                char* arr3 = new char[newLen + 1];
                arr3[newLen + 1] = '\0';

                for (int i = 0; i < arr1_len; i++) {
                  arr3[i] = arr1[i];
                }

                for (int i = arr1_len; i < newLen; i++) {
                  arr3[i] = arr2[i - arr1_len];
                }

                return arr3;
              }

              char* substr(const char* arr, int start, int end = -1) {
                if (end == -1) {
                  end = this->length(arr);
                } 

                int size = end - start;
                char* newArr = new char[size];
                for (int i = start; i < end; i++) {
                  newArr[i - start] = arr[i];
                }

                return newArr;
              }

              int length(const char* arr1) const {
                int index = 0;
                for(; arr1[++index] != '\0';) {}
                return index;
              }

              int findInt(const char* val) const {
                int size = this->length(val);

                int index = 0;
                int value = 0;
                for (int i = (size - 1); i >= 0; i--) {
                    int number = val[i] - '0';
                    if (index != 0) {
                        int multiplyer = 1;
                        for (int j = 0; j < index; j++) {
                            multiplyer *= 10;
                        }
                        number = number * multiplyer;
                    }
                    value += number;
                    index++;
                }
                return value;
              }
          };
      }
    }
  }
}