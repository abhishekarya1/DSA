#include<iostream>

using namespace std;

int main()
{
	int num;
	cin>>num;

	if(num==1) cout<<2<<endl;
	if(num==2) cout<<2<<endl;

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
        if(prime) cout << i <<endl;
    }
}