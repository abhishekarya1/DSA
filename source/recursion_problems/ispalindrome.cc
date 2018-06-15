#include<iostream>
#include<cstring>

using namespace std;

int ispalindrome(char *arr, int last, int cur)
{
	if (cur > last) return true;

	if (arr[last] != arr[cur]) return false;

	ispalindrome(arr, last - 1, cur + 1);
}

int main()
{
	char arr[100];
	cin >> arr;
	int n = strlen(arr);

	if(ispalindrome(arr, n - 1, 0) == true) cout << "true";
	else cout << "false";
}