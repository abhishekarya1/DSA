#include<iostream>

using namespace std;

void myswap(int& a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void sort(int arr[], int n)
{	bool flag = true;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1]) {myswap(arr[j], arr[j + 1]); flag = false;}

		}
		if (flag == true) break;
	}
}

void array_input(int arr[], int n)
{
	for (int i = 0; i < n; ++i) cin >> arr[i];
}

int intersect(int arr1[], int arr2[], int n)
{	int temp[100];
	int p = 0, i = 0, q = 0;

	while (p <= n && q <= n) {

		if (arr1[p] < arr2[q]) {

			p++;

		} else if (arr2[q] < arr1[p]) {

			q++;

		} else if (arr1[p] == arr2[q]) {

			temp[i] = arr1[p] ;
			p++;
			q++;
			i = i + 1;
		}

	}

	cout << "[";
	for (int r = 0; r <= i; r++)
	{
		cout << temp[i];
		if (r != i) cout << ", ";
	}
	cout << "]";

}

int main()
{
	int arr1[100], arr2[100], n;
	cin >> n;
	array_input(arr1, n);
	array_input(arr2, n);
	sort(arr1, n);
	sort(arr2, n);
	intersect(arr1, arr2, n);

}