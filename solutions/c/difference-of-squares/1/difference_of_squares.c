#include "difference_of_squares.h"

unsigned int square_of_sum(unsigned int num) {
    unsigned int res = 0;
    for (unsigned int i = 0; i < num; i++) {
        res += i + 1;
    }    
    return (unsigned int)pow((double)res, 2);
}

unsigned int sum_of_squares(unsigned int num) {
    double res = 0;
    for (double i = 0; i < num; i++) {
        res += pow(i + 1, 2);
    }
    return (unsigned int)res;
}


unsigned int difference_of_squares(unsigned int num) {
    unsigned int res1 = square_of_sum(num);
    unsigned int res2 = sum_of_squares(num);
    return res1 - res2;
}