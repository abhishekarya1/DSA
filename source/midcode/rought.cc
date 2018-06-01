#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int curline=1;curline<=n;curline++)
	{
		int curalpha=64+curline;
		for(int i=1;i<=curline;i++) cout<<(char)curalpha;
		cout<<endl;		
	}

}