#include <iostream>
using namespace std;

void input_arr(int arr[], int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

void sort(int ar[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (ar[j] > ar[j + 1])
			{
				int temp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = temp;
			}
		}
	}
}

void arr_intersection(int arr1[], int arr2[], int n)
{
	int i = 0, j = 0, k = 0;

	int newarr[100];				
	while (i < n)
	{
		while (j < n)
		{
			if (arr1[i] == arr2[j])
			{
				newarr[k] = arr1[i];
				++i;
				++j;
				++k;
			}

			else if (arr1[i] > arr2[j])  ++j;

			else ++i;
		}
	}
	cout << "[";

	for (i = 0; i < k; ++i)				
	{
		cout << newarr[i];
		if (i < k - 1) cout << ", ";	
	}
	cout << "]";
}

int main() {

	int n; cin >> n;

	int arr1[100];
	int arr2[100];

	//Input Array-1
	input_arr(arr1, n);

	//Input Array-2
	input_arr(arr2, n);

	//Sort Array-1
	sort(arr1, n);

	//Sort Array-1
	sort(arr2, n);

	//Print Intersections
	arr_intersection(arr1, arr2, n);

	return 0;
}