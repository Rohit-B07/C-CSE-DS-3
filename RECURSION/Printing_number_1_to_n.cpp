#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0)
        return;

    printNumbers(n - 1);
    cout << n << " ";     
}

int main() {
    int k;
    cout << "Enter the no : ";
    cin >> k;
    printNumbers(k);
}
