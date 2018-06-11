#include<iostream>

using namespace std;

void input_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

int findex(int *arr,int zero, int n, int m)
{
	if (n < zero) return -1;
	if (arr[zero] == m) return zero;
	findex(arr, zero + 1, n,m);
}

int main()
{
	int n, arr[10], m, zero=0;
	cin >> n;
	input_array(arr, n);
	cin >> m;
	cout << findex(arr, zero, n, m);
}