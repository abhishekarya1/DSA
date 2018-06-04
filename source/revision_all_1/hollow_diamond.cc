#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
//increasing lines
	int inclines=(n/2)+1;
	int declines=n-inclines;
	for(int top=1;top<=n;top++) cout<<"*";
	cout<<endl;

	for(int curline=1;curline<=inclines-1;curline++)
	{
		int nspaces=2*curline-1;
		int nstars=n-nspaces;
		for(int i=1;i<=nstars/2;i++) cout<<"*";
		for(int j=1;j<=nspaces;j++) cout<<" ";
		for(int i=1;i<=nstars/2;i++) cout<<"*";

		cout<<endl;

	}
//decreasing lines
	for(int curline=declines-1;curline>=1;curline--)
	{
		int nspaces=2*curline-1;
		int nstars=n-nspaces;
		for(int i=1;i<=nstars/2;i++) cout<<"*";
		for(int j=1;j<=nspaces;j++) cout<<" ";
		for(int i=1;i<=nstars/2;i++) cout<<"*";

		cout<<endl;

		for(int curval=1;curval<=n;curval++) cout<<"*";	 //bottom line	
	}
}	