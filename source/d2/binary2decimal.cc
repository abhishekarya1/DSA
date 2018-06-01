#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n,decimal=0,rem=0,base=1;
	cin>>n;
	int temp=n;
	while(n!=0)
	{
		
		rem=n%10;
		n=n/10;
		decimal=decimal+rem*base;
		base=base*2;
	}
	cout<<decimal;
}