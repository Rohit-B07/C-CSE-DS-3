#include <bits/stdc++.h>
using namespace std;

int main() {
       
    // char s[100];
    // cin.getline(s,100);
    // int count = 0;
    // for(int i = 0 ; s[i]!='\0';i++){
    //         count ++;
    // }
    // cout << count;
    // return 0;
    
   
    // string s;
    // string k;
    // getline(cin, s);
    // getline(cin,k);
    // int count = 0;
    // int counts = 0;
    // for(char c : s) {
    //     count++;
    // }
    // for(char d : k) {
    //     counts++;
    // }
    


    // if (count > counts){
    //     cout << "S is greater";
    // }
    // else if(count < counts){
    //     cout << "S is smaller";
    // }
    // else{
    //     cout << "Both are equal";
    // }
    
    
    string s;
    string k;
    getline(cin, s);
    getline(cin,k);
    int count = 0;
    int counts = 0;
    for(char c : s) {
        count++;
    }
    for(char d : k) {
        counts++;
    }
    
    if (count > counts){
        cout << s;
    }
    else if(count < counts){
        cout << k;
    }
    else{
        cout << "Both are equal";
    }

    
    
    
    // string s;
    // getline(cin, s);
    // int count = 0;
    // for(char c : s) {
    //     count++;
    // }
    // cout << count;


   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    // int age;
    // string s;
    // cin>>age;
    // cin.ignore();
    // getline(cin ,s);
    // cout <<age<<endl<<s;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
	// your code goes here
// 	string name;
// 	cin>>name;
// 	cout<<name;
// 	getline(cin,name);
// 	cout<<name;

}
