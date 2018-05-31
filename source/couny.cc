#include<iostream>

using namespace std;

int main()
{
	int n,sum=0,rem;
	cin>>n;
	int temp=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(sum==temp) cout<<"true";
	else cout<<"false";
}