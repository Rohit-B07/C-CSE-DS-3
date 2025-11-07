#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
    }
            cout<<endl;

}
       int b[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
      }
    
         cout<<endl;
    }
      int c[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>c[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
             cout<<c[i][j] << " ";
        }
          cout<<endl;
     }
}