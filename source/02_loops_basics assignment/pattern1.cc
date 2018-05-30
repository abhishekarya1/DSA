#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int nLines=1;nLines<=n;++nLines)
	{
		for(int nStars=1;nStars<=nLines;++nStars)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}