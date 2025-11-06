#include <iostream>
using namespace std;
int main() {
    int n, num, evenSum=0, oddSum=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> num;
        if(num%2==0) evenSum += num;
        else oddSum += num;
    }
    cout << evenSum << " " << oddSum;
}
