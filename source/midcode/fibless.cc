#include <iostream>
using namespace std;
int main() {
    int n,first=0,second=1;
    cin>>n;
     for(int i=1;i<=n+1;++i)
     {
        if(first<=n) cout<<first<<endl;
         int next=first+second;
         first=second;
         second=next;
         
     }
}
