#include<iostream>

using namespace std;

int main()
{
	int n, bin=0,digit=0, base=1;

	cin>>n;

	while(n)
	{
		digit=n%2;
		bin=bin+(digit*base);
		base=base*10;
		n/=2;
	}
	cout<<bin;
}