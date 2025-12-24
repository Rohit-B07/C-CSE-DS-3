#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0;
    for (char c : s) {
        if (isdigit(c)) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}