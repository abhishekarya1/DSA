#include<iostream>

using namespace std;

void myswap(char &a, char& b)
{
	char temp=a;
	a=b;
	b=temp;
}

int main()
{
	char str[1000];
	cin>>str;

	for(int i=0;i<strlen(str);++i)
	{
		if(i%2==0)
		{
			str[i]=str[i]+('B'-'A');
		}
		else str[i]=str[i]-('B'-'A');
	}
	cout<<str;

}