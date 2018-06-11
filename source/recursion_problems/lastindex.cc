#include<iostream>

using namespace std;

void input_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

int lindex(int *arr, int n, int m)
{
	if (n < 1) return -1;
	if (arr[n - 1] == m) return n-1;
	else lindex(arr, n - 1, m);
}

int main()
{
	int n, arr[10], m;
	cin >> n;
	input_array(arr, n);
	cin >> m;
	cout << lindex(arr, n, m);
}