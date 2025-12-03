#include <iostream>
using namespace std;

void fact(int n){
    long fact = 1;
    for (int i =1 ; i <=n ; i++){
        fact = fact * i;
    }

    cout << "Factorial is : " << fact;
}

int main(){
    int k;
    cout << "Enter the number : " ;
    cin >> k;

    fact(k);
}