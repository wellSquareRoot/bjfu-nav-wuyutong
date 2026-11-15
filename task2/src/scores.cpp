#include "scores.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <functional>

void processScoresFromFile(const std::string& filename) {
    std::ifstream infile(filename);
    if (!infile.is_open()) { 
        std::cerr << "无法打开文件: " << filename << "\n"; 
        return; 
    }
    
    std::vector<double> scores;
    double score;
    while (infile >> score) {
        scores.push_back(score);
    }
    infile.close();

    if (scores.empty()) return;

    // 从大到小排序
    std::sort(scores.begin(), scores.end(), std::greater<double>());
    
    std::cout << "From high to low: ";
    for (double s : scores) std::cout << s << " ";
    std::cout << "\n";
    
    std::cout << "Minimum score: " << scores.back() << "\n";
    std::cout << "Maximum score: " << scores.front() << "\n";
    
    double sum = 0; 
    for (double s : scores) sum += s;
    std::cout << "Average score: " << sum / scores.size() << "\n";
}