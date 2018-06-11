#include<iostream>

using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void input_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

void rev_array(int *arr, int n, int cur)
{
	if (n < 1 && cur > n) return;
	
	swap(arr[n - 1], arr[cur]);

	rev_array(arr, n - 1, cur + 1);
}

void out_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
}

int main()
{
	int arr[10], n, cur = 0;
	cin >> n;
	input_array(arr, n);
	rev_array(arr, n, cur);
	out_array(arr, n);
}