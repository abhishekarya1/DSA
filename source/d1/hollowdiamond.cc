#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int incLines=(n/2)+1;
	int decLines=n-(n/2)+1;
//increasing part only
	for(int i=1;i<=n;++i) cout<<"*"<<"\t";
		cout<<endl;
	for(int curLine=0;curLine<n;++curLine)
	{	
		for(int nStars=(n-curLine)/2;nStars>curLine;--nStars)
		{
			cout<<"*"<<"\t";
		}
		for(int nSpaces=2*curLine-1;nSpaces<curLine;++nSpaces) cout<<"\t";

		for(int nStars=(n-curLine)/2;nStars>curLine;--nStars)
		{
			cout<<"*"<<"\t";
		}
		cout<<endl;
	}
}		