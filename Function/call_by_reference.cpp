#include <iostream>
using namespace std;

void update(int &a){
    a = a + 10;
    cout << a << endl;
}

int main(){
    int x = 5;
    update(x);
    cout << x;
}