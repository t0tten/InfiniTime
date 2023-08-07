#pragma once

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace WatchFace {
          template<typename T>
          class ArrayList {
            public:
              ArrayList() {
                this->length = 0;
                this->cap = 5;
                this->array = new T[this->cap];
              }

              virtual ~ArrayList() { }

              void append(T item) {
                this->expand();
                this->array[this->length++] = item;
              }

              T pop() {
                T tmp = this->array[this->length - 1];
                this->array[this->length - 1] = nullptr;
                this->length -= 1;
                return tmp;
              }

              T get(unsigned int index) {
                return this->array[index];
              }

              unsigned int size() { return this->length; }

            private:
                T* array;
                unsigned int length;
                unsigned int cap;

                void expand() {
                    if (this->length >= this->cap) {
                        this->cap += 5;
                        T* tmp = new T[this->cap];

                        for (int i = 0; i < this->length; i++) {
                            tmp[i] = this->array[i];
                            this->array[i] = nullptr;
                        }
                        delete this->array;
                        this->array = tmp;
                    }
                }
          };
      }
    }
  }
}