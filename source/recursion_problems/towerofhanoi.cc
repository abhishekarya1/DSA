#include<iostream>

using namespace std;

int cnt = 0;

void printSteps(int n, char src, char dest, char helper)
{
	if (n == 0) return;
	cnt++;
	printSteps(n - 1, src, helper, dest);
	cout << "Step - " << cnt << " " << n << " : " << src << " --> " << dest << endl;
	printSteps(n - 1, helper, dest, src);
}

int main()
{
	int n;
	cin >> n;

	printSteps(n, 'A', 'B', 'C');
}