#include<iostream>

using namespace std;

int partition(int *arr, int s, int e)
{
	int i=s-1;
	int j=s;
	int pivot = arr[e];
	for(j;j<e;j++)
	{
		if(arr[j] <= arr[pivot])
		{
			i++;
			swap(arr[i],arr[j]);
		} 

		swap(arr[i+1], arr[e]);

		return	i+1;
	}
}

void quick_sort(int *arr, int s, int e)
{
	if(s >= e) return;

	int p = partition(arr, s, e);
}

int main()
{
	int arr[10] = {2, 1, 5, 6, 7, 6, 8};

	quick_sort(arr, 0, 7);

	for(int j=0;j<7;j++) cout << arr[j]; 
}