#include<iostream>

using namespace std;

int main()
{
	int n,digit=0,osum=0,esum=0;
	cin>>n;
	int i=n;
	while(i)
	{
		digit=n%10;
		if(i%2==0) osum+=digit;
		else esum+=digit;
		n/=10;
		--i;
	}
	cout<<osum<<endl<<esum;
}	