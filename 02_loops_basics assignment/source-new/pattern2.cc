#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int curline=1;curline<=n;++curline)
	{
		int nspaces=n-curline;
		int nstars=curline;
		for(int i=1;i<=nspaces;++i)
		{
			cout<<" ";
		}
		for(int j=1;j<=nstars;++j)
		{
			cout<<"*";
		}

		cout<<endl;


	}
}