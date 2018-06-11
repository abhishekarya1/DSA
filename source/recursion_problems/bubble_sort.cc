#include<iostream>

using namespace std;

void input_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}


void bubbleSort(int arr[], int be, int en)
{
	if (be >= en) {
		return;
	}

	bubbleSort(arr, be + 1, en);
	if (arr[be] > arr[be + 1]) {
		swap(arr[be], arr[be + 1]);
		bubbleSort(arr, be + 1, en);
	}

}

int main()
{
	int arr[10], n;
	cin >> n;
	input_array(arr, n);
	bubbleSort(arr, 0, 10);
}
