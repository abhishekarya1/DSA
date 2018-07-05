#include<iostream>

using namespace std;

int main()
{
	int n,base;
	cin>>n;

	for(int i=n;i>=1;--i)
	{
		n=n/10;
	}
	cout<<n;
}