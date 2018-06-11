#include<iostream>

using namespace std;

void input_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

int isThere(int *arr, int n, int m)
{
	if (n < 1) return 1;
	if (arr[n - 1] == m) return 0;
	else isThere(arr, n - 1, m);



}

int main()
{
	int arr[10], n, m;

	cin >> n;
	input_array(arr, n);
	cin >> m;
	if (isThere(arr, n, m) == 0) cout << "true";
	else cout << "false";

}