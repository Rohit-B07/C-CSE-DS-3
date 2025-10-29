#include <iostream>
using namespace std;

int main() {
    // Input 4-digit number
    int number;
    cout << "Enter a 4-digit number: ";
    cin >> number;

    // Extract digits
    int d1 = number / 1000;        // Thousands place
    int d2 = (number / 100) % 10;  // Hundreds place
    int d3 = (number / 10) % 10;   // Tens place
    int d4 = number % 10;          // Units place

    // Check if palindrome using ternary operator
    cout << ((d1 == d4 && d2 == d3) ? "Palindrome" : "Not a palindrome") << endl;

    return 0;
}
