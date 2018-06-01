#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	for (int curline = 1; curline <= 2; ++curline)
	{
		int val=curline;
		
		for(int i=1;i<=val;++i) cout<<val<<" ";

		cout<<endl;
	}
for(int curline=3;curline<=n;curline++)
{

    for(int i=1;i<=1;++i) cout<<curline<<" ";
    int nzeroes=curline-2;
    for(int i=1;i<=nzeroes;++i) cout<<0<<" ";
    for(int i=1;i<=1;++i) cout<<curline<<" ";

    cout<<endl;
}
}