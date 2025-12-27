#include "resistor_color.h"

static const resistor_band_t cols[] = { COLORS };

unsigned int color_code(resistor_band_t col) {
    return col;
}

const resistor_band_t* colors() {
    return cols;
} 