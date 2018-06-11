#include<iostream>

using namespace std;

void input_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

bool isThere(int *arr, int n, int m)
{
	if (arr[n - 1] == m) return true;
	else {isThere(arr, n - 1, m); return false;}
	
}

int main()
{
	int arr[10], n, m;

	cin >> n;
	input_array(arr, n);
	cin >> m;
	if (isThere(arr, n, m) == true) cout << "true";
	else cout << "false";

}