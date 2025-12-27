#include "grains.h"

uint64_t square(uint8_t index) {
    if (index <= 0 || index >= 65) {
        return 0;
    }
    return 1ul << (index - 1);
}

uint64_t total(void) {
    return UINT64_MAX;
}
