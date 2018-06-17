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

void merge(int *arr , int s, int e)
{
	int mid = (s + e) / 2;
	int i = s;
	int j = mid + 1;
	int k = s;

	int tmp[100];

	while (i <= mid && j <= e)
	{
		if (arr[i] > arr[j]) tmp[k++] = arr[j++];
		else tmp[k++] = arr[i++];
	}
		while (i <= mid) tmp[k++] = arr[i++];
		while (i <= mid) tmp[k++] = arr[j++];
		for (int i = s; i <= e; i++) {
			arr[i] = tmp[i];
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
		output_array(arr, n);
	}