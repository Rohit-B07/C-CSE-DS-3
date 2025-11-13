#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <char> v;
    v.push_back('A');
    v.push_back('D');
    v.push_back('L');



    // v.pop_back();
    // v.insert(v.begin()+2,'C');

    v.insert(v.end()-2,'K');
 

    // v.erase(v.begin()+2);

   
    cout<<endl;
    for(char x:v){
        cout<<x<<" ";
    }


    
    
    return 0;
    
}