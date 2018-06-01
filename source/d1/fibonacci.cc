//Given an n, print the Fibonnaci Number at nth position
#include<iostream>
using namespace std;

int main()
{
	int n;
	int first=0;
	int second=1;
	int next;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		next=first+second;
		//cout<<next<<endl;

		first=second;
		second=next;
	}
	cout<<first<<endl;

}
