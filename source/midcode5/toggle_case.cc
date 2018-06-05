#include<iostream>

using namespace std;

int main()
{
	char str[1000];
	cin>>str;
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z') 	str[i]=str[i]+(('Z'-'A')+('F'-'A'));
		else if(str[i]>='a' && str[i]<='z') str[i]=str[i]-32;
		++i;
	}
	i=0;
	while(str[i]!='\0')
	{
		cout<<str[i];
		++i;
	}
}
