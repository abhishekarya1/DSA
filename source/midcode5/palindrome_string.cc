#include<iostream>
#include<cstring>

using namespace std;

bool checker(char str[])
{	bool flag=true;
	int start=0;
	int last=strlen(str)-1;
	while(start<=last)
	{	if(str[last]!=str[start]) flag=false;
		++start;
		--last;
	}
	return flag==true; 
}

int main()
{
	char str[1000];
	cin>>str;
	if(checker(str)==0) cout<<"true";
}