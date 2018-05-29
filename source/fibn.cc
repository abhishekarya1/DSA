#include <iostream>
using namespace std;
int main() {
    int n,next,first=0,second=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        next=first+second;
        first=second;
        second=next;
    }
    cout<<first<<endl;
}
