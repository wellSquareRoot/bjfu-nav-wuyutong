#include "swap.h"

void swapP(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void swapR(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}