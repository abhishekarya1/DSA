#include<iostream>

using namespace std;

void input_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

void mergeSort(int arr[], int s, int e)
{
	if(s>=e) return;	

	int mid=(s+e)/2;

	mergeSort(arr, s, mid);
	mergeSort(arr, mid+1, e);

	merge(arr, )
}


int main()
{
	int arr[100], n;

	cin >> n;

	input_array(arr, n);

	mergeSort(arr, 0, n-1);
}