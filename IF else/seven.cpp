#include <iostream>
using namespace std;

int main (){
int N;
cin >> N;
if (100>=N && N>=90)
{
    cout << "A";
     
}
else if (89>=N && N>=75)
{
    cout << "B";
}
else if (74>=N && N>=60)
{
    cout << "C";
}
else if (59>=N && N>=45)
{
    cout << "D";
}
else if (44>=N)
{
    cout << "Fail";
}
    return 0;
}