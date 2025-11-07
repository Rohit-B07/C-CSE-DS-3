#include <iostream>
using namespace std;
int main() {
    int arr[5], evenSum=0, oddSum=0;
    for(int i=0; i<5; i++)
        cin >> arr[i];
    for(int i=0; i<5; i++) {
        if(i%2==0) evenSum+=arr[i];
        else oddSum+=arr[i];
    }
    cout << evenSum << " " << oddSum;
}
