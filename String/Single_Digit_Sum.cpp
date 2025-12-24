#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    long long k;
    if (cin >> n >> k) {
        long long sum = 0;
        for (char c : n) {
            sum += c - '0';
        }
        sum *= k;
        while (sum > 9) {
            long long temp = 0;
            while (sum > 0) {
                temp += sum % 10;
                sum /= 10;
            }
            sum = temp;
        }
        cout << sum << endl;
    }
    return 0;
}