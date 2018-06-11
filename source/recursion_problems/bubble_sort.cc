#include<iostream>

using namespace std;

void input_array(arr, n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];

	int main()
	{
		int arr[10], n, cur = 0;
		cin >> n;
		input_array(arr, n);
	}