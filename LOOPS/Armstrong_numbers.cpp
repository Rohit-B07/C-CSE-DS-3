#include <iostream>
using namespace std;
int main() {
    int n, temp, rem, sum = 0, digits = 0;
    cin >> n;
    temp = n;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    temp = n;
    while (temp > 0) {
        rem = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++)
            power *= rem;
        sum = sum+power;
        temp /= 10;
    }
    if (sum == n) cout << "Armstrong";
    else cout << "Not Armstrong";
}
