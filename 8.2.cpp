//Smart Text Analyzer

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count = 0;
    for (char c : s) {
        char lower = tolower(c);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}