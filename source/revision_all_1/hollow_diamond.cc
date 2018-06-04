#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int inclines=(n/2)+1;
	int declines=(n-inclines)-1;
//increasing + full top line
	for(int i=1;i<=n;i++) cout<<"*";
		cout<<endl;
	//increasing
	
	for(int curline=1;curline<=inclines;curline++)

	{	

		int nspaces=(2*curline)-1;
		int nstars=(n-nspaces)/2;
		for(int i=1;i<=nstars;i++) {cout<<"*";}
		for(int i=1;i<=nspaces;i++) {cout<<" ";}
		for(int i=1;i<=nstars;i++) {cout<<"*";}
			
		cout<<endl;
	}
//decreasing
	for(int curline=1;curline<=declines;curline++)
	{
		int nspaces=(2*curline)-1;
		int nstars=(n-nspaces)/2;
		for(int i=nstars;i>=1;i--) cout<<"*";
		for(int i=nspaces;i>=1;i--) cout<<" ";
		for(int i=nstars;i>=1;i--) cout<<"*";
			cout<<endl;
	}
	for(int i=1;i<=n;i++) cout<<"*";
		cout<<endl;
}
