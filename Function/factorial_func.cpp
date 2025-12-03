#include<iostream>
using namespace std;
    int fact;
   int factorial(int N){
        return fact;}
int main(){
    int N;
    cout<<"Enter number";
    cin >> N;
     fact=1;
    for(int i=1;i<=N;i++){
        fact=fact*i;
    }
    cout<< factorial(N);
    }