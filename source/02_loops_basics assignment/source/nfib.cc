#include<iostream>

using namespace std;

int main()
{
	int next,n,first=0,second=1;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		next=first+second;
		first=second;
		second=next;
	}
	cout<<first;
}