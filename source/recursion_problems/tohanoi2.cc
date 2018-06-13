#include<iostream>

using namespace std;

void printStepstosolve(int n, char src, char dest, char helper)
{
	if (n == 0) return;
	printStepstosolve(n - 1, src, helper, dest);
	cout <<"Moving ring "<< n << " from " << src <<" to " << dest << endl;
	printStepstosolve(n - 1, helper, dest, src);
}

int main()
{
	int n;
	cin >> n;

	printStepstosolve(n, 'A', 'B', 'C');

}