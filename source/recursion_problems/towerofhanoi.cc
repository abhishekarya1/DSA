#include<iostream>

using namespace std;

int cnt = 0;

void stepsPrint(int n, string src, string dest, string helper)
{
	if (n == 0) return;
	cnt++;
	stepsPrint(n - 1, src, helper, dest);
	cout << "Move" << " " << n << "th disc from " << src << " to " << dest << endl;
	stepsPrint(n - 1, helper, dest, src);
}

int main()
{
	int n;
	cin >> n;

	stepsPrint(n, "T1", "T2", "T3");

	cout << cnt;
}