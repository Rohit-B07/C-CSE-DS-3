#include <iostream>
using namespace std;

int SumDigits(int n){
    if (n==0){
        return 0;
    }
    int temp = n;
    int rem = temp % 10;

    return(rem) + SumDigits(n/10);
}

int main(){
    int k;
    cout << "Enter the number : " << endl;
    cin >> k;

    cout << "The sum of the digits is : " << SumDigits(k);
}