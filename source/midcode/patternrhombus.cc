#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int inclines=(n/2)+1;
	int declines=n-inclines;
//increasing lines 
	for(int curline=1;curline<=inclines;++curline)
	{	
		int nspaces=inclines-curline;
		int curval=curline;
		for(int i=1;i<=nspaces;++i) cout<<" ";
		for(int curval=curline;curval<=(2*curline)-1;curval++) cout<<curval;
		for(int curval=(2*curline)-2;curval>=curline;curval--) cout<<curval;
		cout<<endl;
	}

//decreasing lines
	for(int curline=declines;curline>=1;--curline)
	{
		int nspaces=declines-curline+1;
		int curval=curline;
		for(int i=1;i<=nspaces;++i) cout<<" ";
		for(int curval=curline;curval<=(2*curline)-1;curval++) cout<<curval;
		for(int curval=(2*curline)-2;curval>=curline;curval--) cout<<curval;
		cout<<endl;	
	}
}