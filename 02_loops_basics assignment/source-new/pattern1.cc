#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int curline=1;curline<=n;++curline)
	{
		for(int nstars=1;nstars<=curline;++nstars)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}