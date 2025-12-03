#include <iostream>
using namespace std;
int Power(int n , int m){
    if (m==0){
        return(1);
    }
    else if (m==1)
    {
        return(n);
    }

    return n * Power(n,m-1);
    
    
}

int main(){
    int k;
    int m;
    cin >> k >> m ;

    cout << Power(k,m);
}

