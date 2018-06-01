#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    for (int curline = 0; curline < n; curline++)
    {
        int val = 1;
        for (int curval = 0; curval <= curline; curval++)
        {
            cout << val<<"\t";
            val = val * (curline - curval) / (curval + 1);
        }
        cout<<endl;
    }
}