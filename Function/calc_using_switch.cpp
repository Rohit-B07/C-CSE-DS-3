#include <iostream>
using namespace std;

int PrintSum(int a , int b){
    return(a+b);
}

void Print_Div(int a ,int b){ //VOID KE ANDAR KOI BHI DATATYPE USE HO SKTA
                              // NO RETURN TYPE WITH ARGUMENT 
    if(b==0)
    {
        cout << "Invalid";
    }
    else{
        cout<<a/b;
    }

}
int Print_Mul(int a ,int b){
    return(a*b);

}
int Print_Diff(int a ,int b){
    return(a-b);

}

int main(){
    int a;
    int b;
    char c;
    cout<<"ENTER THE FIRST NUMBER : ";
    cin >> a;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin >> b;


    cout<< "X = A+B"<< endl;
    cout<< "Y = A/B"<< endl;
    cout<< "Z = A*B"<< endl;
    cout<< "K = A-B"<< endl;
    cout<< "SELECT THE OPERATION : ";

    cin >> c;

    switch (c)
    {
    case ('X'):cout << PrintSum(a,b);break;
    case ('Y'):Print_Div(a,b);break;
    case ('Z'):cout << Print_Mul(a,b);break;
    case ('K'):cout << Print_Diff(a,b);break;
    default:cout << "Invalid Operator";break;
    }

}