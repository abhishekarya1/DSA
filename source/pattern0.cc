#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    //non-zero 
    int nzl=2;
    for(int curLine=1;curLine<=2;++curLine)
    {
        for(int curVal=1;curVal<=curLine;++curVal)
        {
            cout<<curLine<<"\t";
            
        }
        cout<<endl;
    }

    //zero lines

    for(int curLine=3;curLine<=n;++curLine)
    {
        for(int curVal=curLine;curVal<=curLine;++curVal)
        {
            cout<<curVal<<"\t";
        }
        for (int nzeros = 1; nzeros <= curLine-2; ++nzeros)
        {
            cout<<0<<"\t";
        }


        for(int curVal=curLine;curVal<=curLine;++curVal)
        {
            cout<<curVal<<"\t";
        }
        cout<<endl;
    }
    
}