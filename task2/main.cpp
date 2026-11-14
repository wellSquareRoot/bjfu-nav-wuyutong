#include <iostream>
#include <vector>
#include <algorithm>

void swapV(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapP(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapR(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    std::cout << "Swap " << std::endl;
    int x = 5, y = 10;

    swapV(x, y);
    std::cout << "After swapV: x = " << x << ", y = " << y << std::endl;
    swapP(&x, &y);
    std::cout << "After swapP: x = " << x << ", y = " << y << std::endl;
    swapR(x, y);
    std::cout << "After swapR: x = " << x << ", y = " << y << std::endl;

    std::cout << "Grade " << std::endl;
    std::vector<double> scores;
    int n;
    std::cout << "Enter the number of scores: ";
    std::cin >> n;

    std::cout << "Enter the scores: ";
    for (int i = 0; i < n; ++i) {
        double score;
        std::cin >> score;
        scores.push_back(score);
    }

    std::sort(scores.begin(), scores.end(), std::greater<double>());

    std::cout << "From high to low: ";
    for (double score : scores) {
        std::cout << score << " ";
    }
    std::cout << std::endl; 

    double min_score = scores.back();
    double max_score = scores.front();
    double sum = 0.0;
    for (double score : scores) {
        sum += score;
    }
    double average = sum / scores.size();

    std::cout << "Minimum score: " << min_score << std::endl;
    std::cout << "Maximum score: " << max_score << std::endl;
    std::cout << "Average score: " << average << std::endl;

    return 0;
}