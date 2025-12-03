#include <iostream>
using namespace std;

void grade(int n){
    if (n<=100 && n>90){
        cout << "The grade recieved is : " << "A+";
    }
    else if(n<=90 && n>80){
        cout << "The grade recieved is : " << "A";
    }
    else if(n<=80 && n>70){
        cout << "The grade recieved is : " << "B+";
    }
    else if(n<=70 && n>60){
        cout << "The grade recieved is : " << "B";
    }
    else if(n<=60 && n>50){
        cout << "The grade recieved is : " << "C";
    }
    else if(n<=50){
        cout << "The grade recieved is : " << "F";
    }
}

int main(){
    int marks;
    cout << "Enter the marks : ";
    cin >> marks;

    grade(marks);
}