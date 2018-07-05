#include<iostream>

using namespace std;

void alpha_pattern(int n)
{
	for (int curline = n; curline >=1; curline--)
	{
		for(int curval=65;curval<=65+curline-1;++curval)			//increasing print
		{
			cout<<(char)curval;
		}
		for(int curval=65+curline-1;curval>=65;--curval)			//decreasing print
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
