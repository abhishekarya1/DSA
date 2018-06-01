#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int curline=1;curline<=n;++curline)
	{
		int nspaces=n-curline;
		int nstars=(2*curline)-1;

		for(int i=1;i<=nspaces;++i) cout<<" ";
		for(int i=1;i<=nstars;++i) cout<<"*";
		
		cout<<endl;

	}

}