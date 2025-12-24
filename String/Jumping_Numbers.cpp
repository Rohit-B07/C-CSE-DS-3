#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(long long current, long long x, vector<long long>& result) {
    result.push_back(current);

    int lastDigit = current % 10;

    if (lastDigit > 0) {
        long long nextVal = current * 10 + (lastDigit - 1);
        if (nextVal <= x) {
            dfs(nextVal, x, result);
        }
    }

    if (lastDigit < 9) {
        long long nextVal = current * 10 + (lastDigit + 1);
        if (nextVal <= x) {
            dfs(nextVal, x, result);
        }
    }
}

int main() {
    long long x;
    if (cin >> x) {
        vector<long long> result;
        result.push_back(0);

        for (int i = 1; i <= 9; i++) {
            if (i <= x) {
                dfs(i, x, result);
            }
        }

        sort(result.begin(), result.end());

        for (size_t i = 0; i < result.size(); i++) {
            cout << result[i] << (i == result.size() - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}