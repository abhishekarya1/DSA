#include<iostream>

using namespace std;

void input_array(int arr[][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)  cin >> arr[i][j];
	}
}


void output_array(int arr[][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)  cout << arr[i][j] << " ";

		cout << endl;
	}
}

void mirrorSwap(int arr[][100], int n)
{
	int L = 0, R = n - 1;

	while (L <= R)
	{	for (int i = 0; i < n; i++)
		{
			swap(arr[i][L], arr[i][R]);
		}
		L++;
		R--;
	}
}

void transpose(int arr[
	]\"{
-

"-/0]=\
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			swap(arr[i][j], arr[j][i]);
		}
	}
}

int main()
{
	int arr[100][100];
	int n;

	cin >> n;

	input_array(arr, n);
	transpose(arr, n);
	mirrorSwap(arr, n);
	output_array(arr, n);
}