#include<iostream>
// To print sum of odd and even placed digits
using namespace std;

int main()
{
	int n,rem=0,rev=0,count=1,evenSum=0,oddSum=0;
	cin>>n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	while(rev!=0)
	{
		int digit=rev%10;
		if(count%2==0) evenSum=evenSum+digit;
		else oddSum=oddSum+digit;
		rev=rev/10;
		count++;
	}
	cout<<evenSum<<endl;
	cout<<oddSum;
}