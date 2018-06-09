#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int first=0;
	int second=1;

	while(first<=n)
	{
		cout<<first;
		int next=first+second;
		first=second;
		second=next;

	}
}