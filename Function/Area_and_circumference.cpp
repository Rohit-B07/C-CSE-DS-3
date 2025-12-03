#include <iostream>
using namespace std;

void circumference(float a){
    float circumference = 2 * 3.14 * a;
    cout << "The Circumference is : " << circumference << endl;
}
void area(float a){
    float area = 3.14 * a * a;
    cout << "The Area is : " <<area << endl;
}

int main(){
    float k;
    cout << "Enter the radius : ";
    cin >> k;

    area(k);
    circumference(k);

}