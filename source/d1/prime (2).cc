#include<iostream>

using namespace std;

int main () 
{
	int num;
	cin>>num;
    for (int i=2; i<num; i++) 
    {
        bool prime=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0) 
            {
                prime=false;
                break;    
            }
        }   
        if(prime) cout << i << " ";
    }
    return 0;
}