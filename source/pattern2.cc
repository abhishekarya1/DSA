/*
1
2 3
4 5 6
7 8 9 10*/

#include<iostream>

using namespace std;

int main()
{	int n,val=1;
	cin>>n;
	for(int curLine=1;curLine<=n;curLine++)
	{

		for (int curVal = 1 ; curVal <= curLine; curVal++)
		{
			cout<<val<<" ";
			val++;
			
		}
		cout<<endl;
		
	}

}