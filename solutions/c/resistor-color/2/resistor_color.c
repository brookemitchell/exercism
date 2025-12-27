#include "resistor_color.h"

static const resistor_band_t cols[] = {
    BLACK, BROWN, RED, ORANGE, 
    YELLOW, GREEN, BLUE, VIOLET,
    GREY, WHITE
};

unsigned int color_code(resistor_band_t col) {
    return col;
}

const resistor_band_t* colors() {
    return cols;
} 