#include "scores.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <functional>
using namespace std;

void processScoresFromFile(const string& filename) {
    ifstream infile(filename);
    if (!infile.is_open()) { 
        cerr << "无法打开文件: " << filename << "\n"; 
        return; 
    }
    
    vector<double> scores;
    double score;
    while (infile >> score) {
        scores.push_back(score);
    }
    infile.close();

    if (scores.empty()) return;

    sort(scores.begin(), scores.end(), greater<double>());
    
    cout << "From high to low: ";
    for (double s : scores) cout << s << " ";
    cout << "\n";
    
    cout << "Minimum score: " << scores.back() << "\n";
    cout << "Maximum score: " << scores.front() << "\n";
    
    double sum = 0; 
    for (double s : scores) sum += s;
    cout << "Average score: " << sum / scores.size() << "\n";
}