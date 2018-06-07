#include<iostream>

using namespace std;

int input(int arr[], int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

void merge(int arr1[], int m, int arr2[], int n)
{
	int p = 0, i = 0, q = 0;

	while (p <= m-1 && q <= n-1) {

		if (arr1[p] < arr2[q]) {

			p++;

		} else if (arr2[q] < arr1[p]) {

			q++;

		} else if (arr1[p] == arr2[q]) {

			cout << arr1[p];
			p++;
			q++;
			i = i + 1;
		}
	}
}
int main()
{
	int arr1[10], arr2[10], m, n;

	cin >> m >> n;

	input(arr1, m);
	input(arr2, n);

	merge(arr1, m, arr2, n);
}