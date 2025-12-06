#include <bits/stdc++.h>
using namespace std;

int main() { 
    char s1[100];
    char s2[200];
    cin.getline(s1, 100);
    cin.getline(s2, 100);
    
    int result = strncmp(s1, s2,4);
    
    cout << result;
}
    
    
    
//     char s1[100];
//     char s2[200];
//     cin.getline(s1, 100);
//     cin.getline(s2, 100);
    
//     int result = strcmp(s1, s2);
    
    
//     if (result == 0) {
//         cout << "Strings are equal" << endl;
//     } else if (result < 0) {
//         cout << "s1 is less than s2" << endl;
//     } else {
//         cout << "s1 is greater than s2" << endl;
//     }
// }
    
//   cout << strcat(s1,s2);
//   cout << strncat(s1,s2,3);

    
    // cout << s.at(6);
    
    // strncpy(s2,s1,9);
    
    // cout<<s1<<endl;
    // cout<<s2<<endl;
   
   
    
//     char s1[100];
//     char s2[100];
    
//     cin.getline(s1,100);
    
//     strcpy(s2,s1);
    
//     cout<<s1<<endl;
//     cout<<s2<<endl;
// }


    // int age;
    // string s1;
    // string s2;
    
    // cin>>age;
    // cin.ignore();
    // getline(cin,s1);
    // getline(cin,s2);
    
    // cout<<age<<endl;
    // cout<<s1<<endl;
    // cout<<s2<<endl;
