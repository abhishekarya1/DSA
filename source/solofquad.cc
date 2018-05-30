#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	double a,b,c,d,r1,r2;
	cin>>a>>b>>c;

	d=b*b-4*a*c;

	if(d==0)
	{
		r1=(-b)/(2*a);
		r2=r1;
  	}
	else if(d>0)
	{
		r1=-(b+sqrt(d))/(2*a);
		r2=-(b-sqrt(d))/(2*a);
	}
	else
	{
		r1=(-b)/(2*a);
		r2=sqrt(-d)/(2*a);
	}

	cout<<r1<<" "<<r2;
}