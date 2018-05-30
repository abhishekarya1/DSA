#include<iostream>

using namespace std;

int main()
{
	double total,basic;
	char grade;
	int allow;
	cin>>basic>>grade;
	double hra=0.2*basic;
	double da=0.5*basic;
	double pf=0.11*basic;
	if(grade=='A') allow=1700;
	if(grade=='B') allow=1500;
	if(grade=='C') allow=1300;

	total=basic+hra+da+allow-pf;
	cout<<total;
}