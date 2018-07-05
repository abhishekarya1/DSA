#include<iostream>

using namespace std;

int alpha_pattern(int n)
{
	for (int curline = n; curline >=1; curline--)
	{
		for(int curval=65;curval<=64+curline;++curval)
		{
			cout<<(char)curval;
		}
		for(int curval=64+curline;curval>=65;--curval)
		{
			cout<<(char)curval;
		}
		
		cout<<endl;
	}
}

int main()
{
	int n;
	cin>>n;
	
	alpha_pattern(n);

	return 0;	

}
