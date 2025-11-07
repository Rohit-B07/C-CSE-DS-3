#include <iostream>
using namespace std;
int main() {
    int n , col;
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
    
    cin >> n;
    int arra[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    int c[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            c[i][j]=arr[i][j]+arra[i][j];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout << c[i][j] << " ";
        cout << endl;
    }

}
