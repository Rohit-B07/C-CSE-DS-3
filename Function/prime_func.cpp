#include <iostream>
using namespace std;

	void isprime(int n)
	{
	    if(n<=1)
	    {
	        cout<<"not prime";
	    }
	    else
	    {
	        for(int i=2;i<n;i++)
	        if(n%i==0)
	        {
	         cout<<"not prime";
	        }
	        else
	        { cout<<"not prime";
	    }
	}
    }
int main() {
    int n;
    cin>>n;
    isprime(n);
    
}