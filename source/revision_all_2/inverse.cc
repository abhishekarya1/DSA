#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int digit=0,num=0;
	int i=1;
	while(n)
	{	int mul=1;
		digit=n%10;
		int j=digit;
		while(j)
		{
			mul*=10;
			--j;
		}
		num=num+(mul*i);
		n/=10;
		i++;
	}
	cout<<num;
}