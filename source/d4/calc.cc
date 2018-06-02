#include<iostream>

using namespace std;

int main()
{
    int n,i=1,count=0,base=1,octal=0,binary=0,digit=0;
    cin>>n;

    while(n)
    {
        digit=n%10;
        octal=octal+digit*base;
        base=base*8;
        n=n/10;
    }
    base=1;
    while(octal)
    {
        digit=octal%2;
        octal=octal/2;
        binary=binary+(i*digit);
        i=i*10;
    }
    cout<<binary;
}