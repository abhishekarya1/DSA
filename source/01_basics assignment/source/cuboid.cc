#include<iostream>

using namespace std;

int main()
{
	int l,b,h;

	cin>>l>>b>>h;
	cout<<l*b*h<<endl;
	cout<<2*(l*b+b*h+h*l)<<endl;
	cout<<4*(l+2*b+h)<<endl;
}