#include<iostream>

using namespace std;

void myswap(int &n1, int &n2)			// Pass by Reference
{
	int temp=n1;
	n1=n2;
	n2=temp;
}

int main()
{
	int a,b;
	cin>>a>>b;
	myswap(a,b);						// Fuunction call independent of pass method
	cout<<a<<" "<<b;

}	