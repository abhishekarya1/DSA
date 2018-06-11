#include<iostream>

using namespace std;

void input_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

int smallestEle(int *arr, int beg, int end)
{
	int smallestIdx = beg;
	for (int i = beg; i <= end; i++)
	{
		if (arr[i] < arr[beg]) smallestIdx = i;
	}
	return smallestIdx;
}

void selsort(int *arr, int n, int cur)
{
	if (cur > n) return;
	int Idx = smallestEle(arr, cur, n - 1);
	if (arr[cur] > arr[Idx]) swap(arr[cur], arr[Idx]);

	selsort(arr, n, cur + 1);
}

void o_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
}

int main()
{
	int n, arr[10], cur = 0;
	cin>>n;
	input_array(arr, n);
	selsort(arr, n, cur);
	o_array(arr, n);
}