#include <iostream>
using namespace std;

void palindrome(int a){
    int temp;
    int rev=0;
    int rem;

    temp=a;
    while(temp>0){
        rem = temp % 10;
        rev = rev*10 + rem;
        temp = temp / 10;
    }

    if (rev == a){
        cout << "Palindrome";
    }
    else {
        cout << "Not a Palindrome";
    }
}


int main(){
    int k ;
    cout << "Enter the number : ";
    cin >> k;

    palindrome(k);
}