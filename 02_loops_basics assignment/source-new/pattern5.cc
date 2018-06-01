#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int curline=1;curline<=n;++curline)
	{
		int val=n-curline+1;

		for(int curval=1;curval<=curline;++curval)
		{
		cout<<val;
		} 
			cout<<endl;
	}
}