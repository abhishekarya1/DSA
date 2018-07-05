/*
   *
  ***
 *****
  ***
   *

*/


#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int up=n/2+1;

	for(int curLine=1;curLine<up;curLine++)
	{
		for(int curVal=1;curVal<=curLine;curVal++)
		{
		cout<<"*";
		}

		cout<<endl;
	}
}