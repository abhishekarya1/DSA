#include<iostream>

using namespace std;

int main()
{
	int n,digit=0,rev=0;
	cin>>n;

	while(n)
	{
		digit=n%10;
		rev=rev*10+digit;
		n/=10;
	}
	cout<<rev;
}