#include<iostream>

using namespace std;

void input_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

void output_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
}

void bubble_sort(int *arr, int i, int n)
{
	if (i > n - 1) return;

	bubble_sort(arr, i + 1, n);
	if (arr[i] > arr[i + 1]) 
	{
		swap(arr[i], arr[i + 1]);
		bubble_sort(arr, i + 1, n);
	}
}

int main()
{
	int arr[100], n ;
	cin >> n;

	input_array(arr, n);
	bubble_sort(arr, 0, n);
	output_array(arr, n);
}