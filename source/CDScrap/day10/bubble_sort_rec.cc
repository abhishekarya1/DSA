#include<iostream>

using namespace std;

int input_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

int bubble_sort(int arr[], int n)
{
	
}

int output_array( int *arr, int n)
{
	if (n <= 0 ) return 0;
	cout << arr[n-1] << " " << output_array(arr, n - 1);
}

int main()
{
	int arr[10], n;
	cin >> n;
	input_array(arr, n);
	output_array(arr, n);
}