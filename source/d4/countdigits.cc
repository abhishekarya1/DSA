#include<iostream>

using namespace std;

int dig_count(int n,int x)
{
	int digit=0,i=0;
	while(n)
	{
		digit=n%10;
		if(digit==x) i++;
		n=n/10;
	}
	return i;
}

int main()
{
	int n,x;
	cin>>n>>x;
	cout<<dig_count(n,x);
}