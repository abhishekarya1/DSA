#include<iostream>

using namespace std;

int nth(int n)
{
	if (n <= 0) return 0;
	return n + nth(n - 1);
}

int main()
{
	int n;
	cin >> n;
	cout << nth(n);

}