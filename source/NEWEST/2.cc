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

		cout<< endl;
	}
}

void ansStore(int arr[][100], int n)
{
	int ans[100][100];

	

	output_array(ans, n);
}

int main()
{
	int arr[100][100];
	int n;

	cin >> n;

	input_array(arr, n);
	ansStore(arr, n);
}