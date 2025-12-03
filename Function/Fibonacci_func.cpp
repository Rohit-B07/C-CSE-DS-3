#include <iostream>
using namespace std;

void fibon(int n) {
    int a = 0;
    int b = 1;
    int c;

    while (a < n) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int k;
    cout << "Enter the number : ";
    cin >> k;

    fibon(k);

    return 0;
}