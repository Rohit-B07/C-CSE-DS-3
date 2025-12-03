#include <iostream>
using namespace std;

void square(int a){
    cout << a*a << endl;
}

int main(){
    int k;
    cout << "Enter the number : ";
    cin >> k;

    square(k);

    cout << k;
}