#include<iostream>

using namespace std;

int main()
{
	int n,r;
	
	cin>>n>>r;
	int s=n-r;
	int i=n;
	int j=r;
	int k=s;
	while(i>0) { n=n*i; --i; }
	while(j>0) { r=r*j; --j; }
	while(k>0) { n=n*k; --k; }

	int fact=n/(s*r);
	cout<<fact<<endl;

}