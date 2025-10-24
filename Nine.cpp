#include <iostream>
using namespace std;

int main (){
int CP;
int SP;

cin >> CP;
cin >> SP;

if (SP>CP)
{
    cout << "Profit";
}

else if (SP<CP)
{
    cout << "Loss";
}

else if (SP==CP)
{
    cout << "No Profit No Loss";
}


    return 0;
}