#include<iostream>

using namespace std;

int main()
{
	int curline,n;
	cin>>n;

	for(curline=1;curline<=n-1;++curline)
	{
	 	for(int curval=1;curval<=curline;++curval) cout<<curval<<"\t";
	 	for(int nspaces=2*(n-curline-1);nspaces>=0;--nspaces) cout<<"\t";
	 	for(int curval=curline;curval>=1;--curval) cout<<curval<<"\t";	

		cout<<endl;
	}
		for(int curval=1;curval<=curline-1;++curval) cout<<curval<<"\t";
		 	if(curline==n) cout<<n<<"\t";
			 for(int curval=curline-1;curval>=1;--curval) cout<<curval<<"\t";


}