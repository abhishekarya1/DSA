#include<iostream>

using namespace std;

int main()
{
	char str[1000];
	cin>>str;
	char temp;
	int i=0;
	while(str[i]!='\0')
	{
	if(str[i]!=temp) cout<<str[i];
	temp=str[i];
	++i;
	}
}