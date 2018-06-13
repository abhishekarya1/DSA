#include<iostream>
#include<cstring>

using namespace std;

void checkDuplicates(char str[], int length, int i)
{
	if (i >= length) return;

	if (str[i] == str[i + 1])
	{
		int temp = i + 1;

		for (i; i <= length; i++) str[i] = str[i - 1];

		str[temp] = '*';
	}

	checkDuplicates(str, length, i + 1);
}

int main()
{
	char str[100];
	int i = 0;
	cin >> str;
	int length = strlen(str);
	checkDuplicates(str, length, i);
	cout << str;

}