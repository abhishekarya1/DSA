#include<iostream>

using namespace std;

void input_array(int arr[], int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

void output_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
}

void printSub(int *arr, int *subans, int n, int i, int j)
{
	if (i == n) {
		output_array(subans, j);
		cout << endl;
		return;
	}

	subans[j] = arr[i];
	printSub(arr, subans, n, i + 1, j + 1);
	printSub(arr, subans, n, i + 1, j);
}


int main()
{
	int arr[100], subans[100], n;
	cin >> n;

	input_array(arr, n);
	printSub(arr, subans, n, 0, 0);
}