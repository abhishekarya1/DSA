#include<iostream>

using namespace std;

int inv_gen(int n)
{
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
	return inv;
}

bool inv_check(int n,int inv)
{
	if(n==inv) return 1;
	else return 0;
}

int main()
{
	int n;
	cin>>n;
	if(inv_check(n,inv_gen(n))==1) cout<<"true";
	else cout<<"false";


	
}