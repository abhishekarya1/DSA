#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int next,first=0,second=1;

	for(int curline=1;curline<=n;curline++)
	{
		for(int curval=1;curval<=curline;++curval)
		{
			cout<<first<<" ";
			next=first+second;
			first=second;
			second=next;
		}
		cout<<endl;
	}
}