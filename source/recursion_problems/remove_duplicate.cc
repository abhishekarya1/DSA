#include<iostream>
#include<cstring>

using namespace std;

void remDup(char str[], int length, int i)
{
	if (i >= length - 1) return;
	if (str[i] == str[i + 1])
	{
		for (int c = i + 1; c <= length - 1; c++) str[c] = str[c + 1];
	}
	remDup(str, length, i + 1);
}

int main()
{
	char str[100];
	int i = 0;
	cin >> str;

	int length = strlen(str);

	remDup(str, length, i);

	cout << str;
}