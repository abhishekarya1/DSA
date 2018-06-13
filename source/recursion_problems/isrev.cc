#include<iostream>

using namespace std;

bool isRev(char str1[], char str2[], int cur, int n)
{
	if (cur > n) return true;

	if (str1[cur] != str2[n - 1]) return false;


	isRev(str1, str2, cur + 1, n - 1);
}

int main()
{
	char str1[10], str2[10];
	int cur = 0, i = 0;

	cin>>str1;
	cin>>str2;

	while (str2[i] != '\0')
	{
		i++;
	}

	isRev(str1, str2, cur, i) == true ? cout<<"true" : cout<<"false";

}