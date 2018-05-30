#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	bool isPrime=true; //sentinel

	for(int div=2;div<n;++div)
	{
		if(n%div==0)
		{
			isPrime=false;
			break;
		}
	}
	if(isPrime==false) cout<<"Not Prime";
	else if (isPrime==true) cout<<"Prime";
}