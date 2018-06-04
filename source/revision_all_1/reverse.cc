#include<iostream>

using namespace std;

int main()
{
	int n,rev=0,digit=0;
	cin>>n;

	while(n)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	cout<<rev;
}