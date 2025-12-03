#include <iostream>
using namespace std;

void swap(int a , int b){
    int c;
    c = a;
    a = b;
    b = c;

    cout << a << " " << b << endl ; 
}

int main(){
    int x;
    int y;
    cin >> x;
    cin >> y;

    swap(x,y);

    cout << x << " " << y;
}