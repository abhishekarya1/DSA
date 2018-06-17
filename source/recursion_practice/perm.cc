#include<iostream>

using namespace std;

void printper(char str[], int i)
{
	if(str[i] == '\0') 
	{
		cout << str << " ";	
		return;
	}

	for(int j=i;str[j]!='\0';j++)
	{
		swap(str[i], str[j]);
		printper(str, i+1);
		swap(str[i], str[j]);
	}
}

int main()
{
	char str[100];
	cin >> str;

	printper(str, 0);
}