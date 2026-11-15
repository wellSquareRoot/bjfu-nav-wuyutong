#include <iostream>
#include "swap.h"
#include "scores.h"

int main() {
    // 测试 swap
    int x = 10, y = 5;
    swapByPointer(&x, &y);
    std::cout << "After swapP: x = " << x << ", y = " << y << "\n";
    
    // 测试读取成绩
    std::cout << "Grade\n";
    processScoresFromFile("scores.txt");
    
    return 0;
}