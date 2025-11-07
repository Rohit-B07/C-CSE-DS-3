#include <iostream>
using namespace std;

int main (){
int N;
cin >> N;

if (5<=N && N<=11)
{
    cout << "Morning";
}
else if (12<=N && N<=16)
{
    cout << "Afternoon";
}
else if (17<=N && N<=20)
{
    cout << "Evening";
}
else{
    cout << "Night";
}


    return 0;
}