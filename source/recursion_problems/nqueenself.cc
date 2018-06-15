#include<iostream>

using namespace std;

void clearBoard(char board[][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) board[i][j] = 'X';
	}
}



bool solveQueen(char board[][100], int r, int dim)
{
	if (r == dim) return false;

	for (int c; c < dim; c++)
	{
		bool check = canPlace(board, r, c, dim);
		if (check == true)
		{
			board[r][c] = 'Q';

			bool status = solveQueen(board, r + 1, dim);
			if (status == true) return true;
			board[r][c] = 'X';
		}
	}
	return false;
}

int main()
{
	int n;
	cin >> n;

	char board[100][100];
	clearBoard(board, n);

	solveQueen(board, 0, n) == true ? outputBoard(board, n) : cout << "Couldn't Solve!!!";

}