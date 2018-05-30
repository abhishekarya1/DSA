#include<iostream>

using namespace std;

int main()
{
	double a,b;
	char c;
	cin>>a>>b;
	cin>>c;

	if(c=='+') cout<<a+b;
	if(c=='-') cout<<a-b;
	if(c=='*') cout<<a*b;
	if(c=='/') cout<<a/b;
	if(c=='%') cout<<(int)a%(int)b;

}