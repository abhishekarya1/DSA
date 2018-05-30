#include<iostream>

using namespace std;

int main()
{	
	int n,ans=1,m;

	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
	ans=ans*n;
	}
	cout<<ans;

}