#include<iostream>

using namespace std;

int main()
{
	int n,rev=0,digit=0,oddSum=0,evenSum=0;
	cin>>n;
	bool indic=true; //for odd

	while(n)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	cout<<rev<<endl;
	digit=0;

	while(rev)
	{
		digit=rev%10;
		if(indic==true)
		{
			oddSum=oddSum+digit;
			indic=false;
		}
		else if(indic==false)
		{
			evenSum=evenSum+digit;
			indic=true;
		}
		rev=rev/10;

	}
	cout<<oddSum<<" "<<evenSum;
}