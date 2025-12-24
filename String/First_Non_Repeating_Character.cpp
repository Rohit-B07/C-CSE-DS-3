#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> freq(256, 0);
    for (char c : s) {
        freq[c]++;
    }
    bool found = false;
    for (char c : s) {
        if (freq[c] == 1) {
            cout << c << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << -1 << endl;
    }
    return 0;
}