#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int curline=1;curline<=2;curline++)
	{
		for(int curval=1;curval<=curline;curval++) cout<<curline;

		cout<<endl;
	
	}
	for(int curline=3;curline<=n;curline++)
	{
		cout<<curline;
		for(int j=1;j<=curline-2;j++) cout<<0;
		cout<<curline;
		cout<<endl;
	}
}