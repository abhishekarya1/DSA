#include<iostream>

using namespace std;

int main()
{
	int n,m;
	cin>>m>>n;
	
	for(int i=m;i<n;++i)
	{
		bool isPrime=true;
		for(int j=2;j<i;++j)
		{
			if(i%j==0)
			{
				isPrime=false;
				break;
			}
		}
		if(isPrime==true) cout<<i<<" ";
	}
}