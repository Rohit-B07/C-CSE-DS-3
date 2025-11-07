#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    
    int k;
    cin >> k;
    int arra[k][k];
    for(int i=0; i<k; i++)
        for(int j=0; j<k; j++)
            cin >> arra[i][j];
    for(int i=0; i<k; i++) {
        for(int j=0; j<k; j++)
            cout << arra[i][j] << " ";
        cout << endl;
    }
}
