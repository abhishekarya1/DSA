#include<iostream>

using namespace std;

int main()
{
	int n,first=0,second=1;
	cin>>n;

	for(int i=1;i<=n;++i)
	{
		int next=first+second;
		first=second;
		second=next;
	}
	cout<<first;

}