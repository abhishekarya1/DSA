#include<iostream>

using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void input_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

void b_sort_rec(int *arr, int n, int cur)
{
	if (cur >= n) return;
	b_sort_rec(arr, n, cur + 1);
    if (arr[cur] > arr[cur + 1])
    {
        swap(arr[cur], arr[cur + 1]);
        b_sort_rec(arr, n, cur + 1);
    }
    
 
}

void out_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
}

int main()
{
	int arr[10], n, cur = 0;
	cin >> n;
	input_array(arr, n);
	b_sort_rec(arr, n, cur);
	out_array(arr,n);
}