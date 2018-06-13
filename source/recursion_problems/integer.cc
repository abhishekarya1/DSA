#include<iostream>

using namespace std;

int numConv(char str[], int last, int num, int mul)
{	
	if (last == 0) return num;
	num = num + (str[last-1] - 48) * mul;
	mul = mul * 10;
	numConv(str, last - 1, num, mul);
}

int main()
{
	int cur = 0, i=0, mul = 1, num=0;
	char str[10];
	cin >> str;

	while(str[i] != '\0')
	{
		i=i+1;
	}

	int last=i;
	cout << numConv(str, last, num, mul);
}