#include<iostream>

using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	
	for(int i=m;i<=n;i++)
	{
		int sum=0;
		int temp=i;
		while(temp)
		{
		int digit=temp%10;
		sum=sum+(digit*digit*digit);
		temp=temp/10;
		}

		if(i==sum) cout<<i<<endl;
	}
}