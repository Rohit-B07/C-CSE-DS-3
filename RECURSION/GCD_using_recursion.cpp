#include <iostream>
using namespace std;

int gcd(int n, int m) {
    if (m == 0) {
        return n;
    }
    return gcd(m, n % m);
}

int main() {
    int k, l;
    cout << "Enter two numbers: ";
    cin >> k >> l;

    cout << "GCD of " << k << " and " << l << " is: " << gcd (k,l) << endl;

    return 0;
}