#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int val=1;
	for(int curline=1;curline<=n;++curline)
	{
		for(int curval=1;curval<=curline;++curval)
		{
		cout<<val;
		val++;	
		} 
			cout<<endl;
	}
}