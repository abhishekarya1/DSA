#include<iostream>

using namespace std;

void input_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

void merge(int arr[], int s, int e)
{

	int mid = (s + e) / 2;
	int tmp[100];
	int i = s;
	int k = s;
	int j = mid + 1;

	while (i <= mid && j <= e)
	{
		if (arr[i] < arr[j]) tmp[k++] = arr[i++];
		else tmp[k++] = arr[j++];
	}

	while (i <= mid) tmp[k++] = arr[i++];
	while (j <= e) tmp[k++] = arr[j++];

	for(int i=s;i<=e;i++){
        arr[i] = tmp[i];
    }
}



void mergeSort(int arr[], int s, int e)
{
	if (s >= e) return;

	int mid = (s + e) / 2;

	mergeSort(arr, s, mid);
	mergeSort(arr, mid + 1, e);

	merge(arr, s, e);
}

int main()
{
	int arr[100], n;

	cin >> n;

	input_array(arr, n);

	mergeSort(arr, 0, n - 1);

	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" , ";
	}
}