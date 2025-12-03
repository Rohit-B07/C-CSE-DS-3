#include <iostream>
using namespace std;

int fact(int a){
    if (a==0 || a==1){   // BASE CASE
        return 1;
    }
    return a * fact(a-1);   // RECURSIVE CASE
}

int main(){
    int k;
    cout << "Enter the number : ";
    cin >> k;

    cout << "The factorial is : "<< fact(k);
}