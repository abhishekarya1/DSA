#include<iostream>

using namespace std;

int main()
{
	int m,n;
	bool isPrime=true;
	cin>>m>>n;

	for(int i=m;i<=n;++i)
	{
		for(int div=2;div<i;++div)
		{
			if(i%div==0) {isPrime=false; break;}
		}

		if(isPrime==true) cout<<i<<" ";
	}

}