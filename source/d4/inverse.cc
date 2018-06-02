#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int temp=n,digit=0,inv=0,place=0,i=0;

	while(temp)
	{	
		int prod=1;
		digit=temp%10;
		++i;
		temp=temp/10;
		int rp=digit;
		while(rp)
		{
		place=prod;
		prod=prod*10;
		--rp;
		}
		inv=inv+i*place;
	}
	cout<<inv;
}