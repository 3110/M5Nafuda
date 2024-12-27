// clang-format off
#include "M5Nafuda.hpp"
// clang-format on

M5Nafuda nafuda;

void forever(void) {
    while (true) {
        delay(1);
    }
}

void setup(void) {
    if (!nafuda.begin()) {
        forever();
    }
}

void loop(void) {
    nafuda.update();
    delay(100);
}
