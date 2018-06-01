#include<iostream>

using namespace std;

int main()
{
	int x,base,i=0;
	cin>>x>>base;

	while(x!=1)
	{
		x=x/base;
		++i;
	}
	cout<<i;

}