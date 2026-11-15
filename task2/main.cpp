#include <iostream>
#include "swap.h"
#include "scores.h"

int main() {
    int x = 10, y = 5;
    swapP(&x, &y);
    std::cout << "After swapP: x = " << x << ", y = " << y << "\n";
    
    std::cout << "Grade\n";
    processScoresFromFile("scores.txt");
    
    return 0;
}