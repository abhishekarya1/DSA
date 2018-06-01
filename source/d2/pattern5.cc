#include<iostream>

using namespace std;

int main()
{
  int n,val=0;
  cin>>n;

  for(int curline=1;curline<=n;++curline)
  {
    for(int nspaces=n-curline;nspaces>=1;--nspaces) cout<<"\t";
    for(int curval=curline;curval<=2*curline-1;++curval) cout<<curval<<"\t";
    for(int curval=(2*curline)-2;curval>=curline;--curval) cout<<curval<<"\t";

    cout<<endl;
  }
}