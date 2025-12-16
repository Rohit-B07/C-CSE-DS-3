// Array vector Analyzer

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int marks[5];
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }

    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += marks[i];
    }

    double average = total / 5.0;

    vector<double> results;
    results.push_back(total);
    results.push_back(average);

    cout << "Total Marks: " << results[0] << endl;
    cout << "Average Marks: " << results[1] << endl;

    return 0;
}