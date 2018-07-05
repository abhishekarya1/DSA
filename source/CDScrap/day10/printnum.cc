#include<iostream>

using namespace std;

void digit_print(int num)
{
	
}

int printnum(int n)
{
	if (n == 0) return 0;
	int num = n % 10;
	digit_print(num);
	n /= 10;
	printnum(n);
}

int main()
{
	int n;
	cin >> n;
	printnum(n);

}