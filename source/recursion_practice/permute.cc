#include<iostream>

using namespace std;

void printPermute(char str[], int i)
{
	if (str[i] == '\0')
	{
		cout << str;
		cout << endl;
	}

	for (int j = i; str[j] != '\0'; j++)
	{
		swap(str[i], str[j]);
		printPermute(str, i + 1);
		swap(str[i], str[j]);
	}
}

int main()
{
	char str[100];

	cin >> str;

	printPermute(str, 0);
}