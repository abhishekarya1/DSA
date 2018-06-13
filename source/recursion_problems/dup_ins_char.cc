#include<iostream>
#include<cstring>

using namespace std;

void checkDuplicates(char str[], int length, int c)
{
	if (c >= length) return;
	if (str[c] == str[c + 1])
	{
		for (int i=length; i >= c; i--) str[i + 1] = str[i];
		str[c+1] = '*';	
	}
	

	checkDuplicates(str, length, c + 1);
}	

int main()
{
	char str[100];
	int c = 0;
	cin >> str;
	int length = strlen(str);
	checkDuplicates(str, length, c);
	cout << str;

}