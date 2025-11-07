#include <iostream>
using namespace std;

int main(){
int a , b , c ;
cin >> a;
cin >> b;
cin >> c;

int d = ((a>b && a>c)? a: (b>a && b>c)?b:c);
cout << d;
return 0;
}