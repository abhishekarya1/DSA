#include<iostream>

using namespace std;

int main()
{
	int next,n,val=0;
	cin>>n;
	int s=0;

	for(int curLine=1;curLine<=n;++curLine)
	{
		for(int curVal=1;curVal<=curLine;++curVal)
		{
			cout<<val<<"\t";
			next=val+s;
			val=s;
			s=next;
			val++;
		}
		cout<<endl;
	}
}