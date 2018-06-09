#include<iostream>

using namespace std;

int main()
{
	int n, digit=0, dec=0, base=1;

	cin>>n;	
	while(n)
	{
		digit=n%2;
		dec=dec+(base*digit);
		base=base*2;
		n=n/10;

	}
	cout<<dec;
}	