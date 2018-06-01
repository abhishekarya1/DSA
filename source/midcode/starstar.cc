#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;


	int inclines=(n/2)+1;
	int declines=n-inclines;
//increasing
	for(int curline=1;curline<=inclines;curline++)
	{
		int nspaces=inclines-curline;
		int nstars=(2*curline)-1;

		for(int i=1;i<=nspaces;i++) cout<<" "<<"\t";
		for(int i=1;i<=nstars;++i) cout<<"*"<<"\t";
		cout<<endl;
	}
//decreasing
	int nspaces=1;
	for(int curline=declines;curline>=1;curline--)
	{
		
		int nstars=(2*curline)-1;
		for(int i=nspaces;i>=1;i--) cout<<" "<<"\t";
		for(int i=nstars;i>=1;i--) cout<<"*"<<"\t";
		cout<<endl;
		++nspaces;
	}	
}