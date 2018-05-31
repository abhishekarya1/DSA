#include<iostream>

using namespace std;

int main()
{
	int i=1,n,digit=0,temp=0;
	cin>>n;

	while(n!=0)
	{
		digit=n%8;
		n=n/8;
		temp=temp+(i*digit);
		i=i*10;
	}
	cout<<temp;
}