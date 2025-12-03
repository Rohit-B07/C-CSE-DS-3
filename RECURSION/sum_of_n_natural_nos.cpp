#include <iostream>
using namespace std;
int SumDigits(int n){
    if(n<=0){
        return(n);
    }
    else{
        return(n)+SumDigits(n-1);
    }

}

int main(){
    int k;
    cout << "Enter the number : ";
    cin >> k;
    cout << "The sum of n natural numbers is : " << SumDigits(k);
}