#include<iostream>

using namespace std;

void printper(char str[], int i, int j)
{
	if(str[i] == '\0') return;

	for(int i=0;str[i]!='\0';i++)
	{
		swap(str[i], str[j]);
		printper(str, i, j+1);
		swap(str[i], str[j]);
	}
}

int main()
{
	char str[100];
	cin >> str;

	printper(str, 0, 0);
}