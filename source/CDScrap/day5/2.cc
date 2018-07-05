#include<iostream>

using namespace std;

int decimal_to_binary(int n)
{
	int digit=0,binary=0,i=1;
	while(n)
	{
		digit=n%2;
		n=n/2;
		binary=binary+(i*digit);
		i*=10;
	}
	return binary;
}

int main()
{
	int n;
	cin>>n;
	
	cout<<decimal_to_binary(n);
}