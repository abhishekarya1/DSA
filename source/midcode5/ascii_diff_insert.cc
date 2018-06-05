#include<iostream>

using namespace std;

int main()
{
	char str[1000];
	cin>>str;
	int i=0;
	int diff=0;
	cout<<str[i];
	for(i;i<strlen(str)-1;i++)
	{
	diff=(str[i+1]-str[i]);
	cout<<diff;
	cout<<str[i+1];
	}
	
}
