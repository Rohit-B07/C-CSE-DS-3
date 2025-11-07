#include <iostream>
using namespace std;
int main() {
    char arr[10];
    for(int i=0; i<10; i++)
        cin >> arr[i];
    for(int i=0; i<10; i++)
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||
           arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
            cout << arr[i] << " ";
}
