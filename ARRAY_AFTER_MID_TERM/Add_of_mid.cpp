#include <iostream>
using namespace std;
int main(){
    int m ;
    cout << "Enter the size : ";
    cin >> m;
    int a[m];
    int b[m];
    int c[2*m];
    for (int i=0 ; i < m ; i++){
        cin >> a[i];
    }

    for (int i=0 ; i < m ; i++){
        cin >> b[i];
    }

    

    for (int i = 0; i <m ; i++){
        c[i]=a[i];
    }

    for (int i = 0; i <m ; i++){
        c[m + i]=b[i];
    }

    for (int i = 0; i < 2*m ; i++){
        cout << c[i] << " ";
    }
    cout << endl;

    int e = c[2*m/2];
    int f = c[((2*m)/2)-1];

    int sum = e+f;

    cout << "The sum of the mid term is : "<<sum;
}