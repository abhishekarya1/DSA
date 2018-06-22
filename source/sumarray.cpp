#include<iostream>
using namespace std;
int *sumarray(int n[],int m[],int&,int);

int main()
{
int N,M,n[100],m[100],k;
cin>>N;

for(int i=0;i<N;i++)
    cin>>n[i];
    cin>>M;
for(int i=0;i<M;i++)
    cin>>m[i];
k=N-1;
for(int i=0;i<N;i++)
   {   if(i>=N/2)
    break;
    int x=n[i];
    n[i]=n[k];
    n[k]=x;
    k--;
    }
k=M-1;
for(int i=0;i<M;i++)
   {   if(i>=M/2)
    break;
    int x=m[i];
    m[i]=m[k];
    m[k]=x;
    k--;
    }
if(N>=M)
 {

int *ans=sumarray(n,m,N,M);

for(int i=N-1;i>=0;i--) {
    cout<<*(ans+i)<<", ";
    if(i==0)
        cout<<"END";
    }
 }
else
  {int *ans=sumarray(m,n,M,N);
   for(int i=M-1;i>=0;i--)
    {cout<<*(ans+i)<<", ";
    if(i==0)
        cout<<"END";
    }

  }
 }
int* sumarray(int a[] ,int b[],int & M,int N)

{  int carry=0,m=M,n=N;
    for(int i=0;i<M;i++)
    {
       if(i<N)
        {int t=a[i]+b[i]+carry;
             carry=0;
            if(t>=10)
            {
            carry=t/10;
             t=t-carry*10;
            }
            a[i]=t;

        }
       else
          { int t=a[i]+carry;
          carry=0;
            if(t>=10)
             {
             carry=t/10;
             t=t-carry*10;
             a[i]=t;
              }
           }
      }
if(carry)
{M++;
a[M-1]=carry;}


return a;

}
