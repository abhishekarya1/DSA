#include<iostream>

using namespace std;

int main()
{
	int a,b,temp;
	cin>>a;
	cin>>b;

	temp=b;
	b=a;
	a=temp;

	cout<<a<<" ";
	cout<<b;
}