#include <iostream>
#include <string>
using namespace std;
int main()
{
  int super_prev=0,prev=1,curr=8,n,i;
  cin>>n;
  if(n==1)
  cout<<super_prev<<endl;
  else if(n==2)
  {
  cout<<super_prev<<endl;
  cout<<prev<<endl;

}
if(n>=3)
{
    cout<<super_prev<<endl;
  cout<<prev<<endl;
    for(i=3;i<=n;i++)
{curr=super_prev+prev;
super_prev=prev;
prev=curr;
cout<<curr<<endl;
}}
return 0;
}