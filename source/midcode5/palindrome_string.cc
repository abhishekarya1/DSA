#include<iostream>
#include<cstring>

using namespace std;

int checker(char str[])
{	bool flag=true;
	int start=0;
	int last=strlen(str)-1;
	while(start<=last)
	{	if(str[start]!=str[last]) 
		flag=false;
		++start;
		--last;
	}
	if(flag==true) return 12;
}

int main()
{
	char str[1000];
	cin>>str;
	if(checker(str)==12) cout<<"true";
}