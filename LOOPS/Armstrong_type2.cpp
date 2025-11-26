#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        int temp = i;
        int digits = 0;
        int sum = 0;

        // Count the number of digits in i
        while (temp > 0) {
            temp /= 10;
            digits++;
        }

        // If i is 0, treat it as having 1 digit (special case)
        if (digits == 0) digits = 1;

        // Calculate the sum of each digit raised to the power of digits
        temp = i;
        while (temp > 0) {
            int rem = temp % 10;
            int power = 1;
            for (int j = 0; j < digits; j++) {
                power *= rem;
            }
            sum += power;
            temp /= 10;
        }

        // Check if it's an Armstrong number and print
        if (sum == i) {
            cout << i << " ";
        }
    }

    cout << endl;  // For a newline after all outputs
    return 0;
}
