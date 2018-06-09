#include<iostream>

using namespace std;

int main()
{
	int n;
	int place;
	cin>>n;
	int digit=0,num=0;
	int i=1;
	while(n)
	{	int mul=1;
		digit=n%10;
		int j=digit;
		while(j-1)
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