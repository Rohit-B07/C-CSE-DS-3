#include <iostream>
using namespace std;

void Arm(int n){

    for (int i = 0; i <= n; i++) {
        int temp = i;
        int digits = 0;
        int sum = 0;
        while (temp > 0) {
            temp /= 10;
            digits++;
        }
        if (digits == 0) digits = 1;
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
        if (sum == i) {
            cout << i << " ";
        }
    }


}

int main(){
    int k;
    cout << "Enter the number : ";
    cin >> k;

    Arm(k);
}