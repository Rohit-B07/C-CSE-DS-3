#include <iostream>
using namespace std;

int main (){
int A;
int B;
int C;

cin >> A;
cin >> B;
cin >> C;

if (A==B && B==C && A==C)
{
    cout << "Eqilateral";
}

else if (A==B || B==C || A==C)
{
    cout << "Isosceles";
}

else if (A != B && A != C && B != C)
{
    cout << "Scalene";
}

else {
    cout << "Not a Triangle";
}



    return 0;
}