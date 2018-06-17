#include<iostream>

using namespace std;

void input_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cout << arr[i];
}

void merge(int *arr , int s, int e)
{
	int mid = (s + e) / 2;
	int i = s;
	int j = mid + 1;
	int k = s;

	while (s <= mid && e >= mid + 1)
	{
		
	}
}

void mergesort(int *arr, int s, int e)
{
	if (s >= e) return;

	int mid = (s + e) / 2;

	mergesort(arr, s, mid);
	mergesort(arr, mid + 1, e);

	merge(arr, s, e);
}

int main()
{
	int arr[100], n;
	cin >> n;

	input_array(arr, n);
	mergesort(arr, 0, n - 1);
}