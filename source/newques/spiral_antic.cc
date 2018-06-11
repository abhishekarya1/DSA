#include<iostream>

using namespace std;

void input_array(int arr[][10], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++) cin >> arr[i][j];
	}
}

void spiralantic(int arr[][10], int r, int c)
{
	int T = 0, B = r - 1, L = 0, R = c - 1;
	int dir = 0;

	while (L <= R && T <= B)
	{
		if (dir == 0)
		{
			for (int i = T; i <= B; i++) cout << arr[i][L] << ", ";
			L++;
		}
		else if (dir == 1)
		{
			for (int i = L; i <= R; i++) cout << arr[B][i] << ", ";
			B--;
		}
		else if (dir == 2)
		{
			for (int i = B; i >= T; i--) cout << arr[i][R] << ", ";
			R--;
		}
		else if (dir == 3)
		{
			for (int i = R; i >= L; i--) cout << arr[T][i] << ", ";
			T++;
		}
		dir = (dir + 1) % 4;
	}
	cout << "END";
}

int main()
{
	int arr[10][10], r, c;
	cin >> r >> c;
	input_array(arr, r, c);
	spiralantic(arr, r, c);
}