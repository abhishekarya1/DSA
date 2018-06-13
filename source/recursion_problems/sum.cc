#include<iostream>

using namespace std;

int sumCalc(char str[], int cur, int &sum)
{
	if(str[cur]=='\0') return sum;
	sum=sum+str[cur]-48;
	sumCalc(str,cur+1,sum);
}

int main()
{
	int cur=0, sum=0;
	char str[10];
	cin>>str;

	sumCalc(str, cur , sum);
	cout<<sum;
}