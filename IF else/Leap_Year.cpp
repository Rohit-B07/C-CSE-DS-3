#include <iostream>
using namespace std;

int main (){

int N;
cin >> N;

if (N%4==0 && N%100!=0)
{
    cout << "Leap Year";
}
else if (N%400==0)
{
    cout << "Leap Year";
}
else {
    cout << "Not Leap Year";
}


    return 0;
}
