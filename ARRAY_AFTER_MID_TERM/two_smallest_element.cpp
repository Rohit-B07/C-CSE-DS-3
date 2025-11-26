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

    int min = c[0];

    for (int i = 0; i < 2*m ; i++){
        if (c[i]< min ){
            min = c[i];
        }

    }

    int sec_min = c[0];
    

    for (int i = 0; i < 2*m ; i++){
        if (c[i] < sec_min && c[i] > min){
            sec_min = c[i];
        }
    }

    cout << min << " " << sec_min;


    

}