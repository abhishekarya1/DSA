#include<iostream>

using namespace std;

int main()
{
  int i, j;
  int n;
  cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

}