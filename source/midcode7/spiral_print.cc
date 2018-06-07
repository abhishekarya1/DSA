#include<iostream>

using namespace std;

void input(int arr[][10], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; ++j) cin >> arr[i][j];
	}
}

void spiral(int arr[][10], int m, int n)
{
	
}

int main()
{

	int arr[10], n;

	cin >> m >> n;

	input(arr, m, n);

	spiral(arr, m, n);
}
