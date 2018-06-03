#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int inclines=n;
    int declines=n-1;
//increasing lines 
    for(int curline=1;curline<=inclines;++curline)
    {   
        int nspaces=inclines-curline;
        int curval=curline;
        for(int i=1;i<=nspaces;++i) cout<<" "<<"\t";
        for(int curval=curline;curval<=(2*curline)-1;curval++) cout<<curval<<"\t";
        for(int curval=(2*curline)-2;curval>=curline;curval--) cout<<curval<<"\t";
        cout<<endl;
    }

//decreasing lines
    int nspaces=1;
    for(int curline=declines;curline>=1;--curline)
    {
        int curval=curline;
        for(int i=1;i<=nspaces;++i) cout<<" "<<"\t";
        for(int curval=curline;curval<=(2*curline)-1;curval++) cout<<curval<<"\t";
        for(int curval=(2*curline)-2;curval>=curline;curval--) cout<<curval<<"\t";
        cout<<endl; 
        ++nspaces;
    }
}