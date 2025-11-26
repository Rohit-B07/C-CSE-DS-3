#include <iostream>
using namespace std;
int main(){
    int arr[7] = {1,2,3,5,7,3,27};
    int max = arr[0];
    int sec = arr[0];

    for(int i=0; i<7; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int j=0; j<7; j++){
        if(arr[j] < max && arr[j]  > sec){
            sec = arr[j];
        }
    }
    cout<<sec;
}