#include<iostream>

using namespace std;

void clearBoard(char board[][100], int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) board[i][j] = 'X';
	}
}

bool canPlace(char board[][100], int r, int c, int dim)
{
	for (int x = 0; x < r; x++)
	{
		if (board[x][c] == 'Q') return false;
	}


}

bool solveQueen(char board[][100], int r, int dim)
{
	if (r == dim) return true;

	for (int c = 0; c < dim; c++)
	{
		bool check = canPlace(board, r, c, dim);
		if (check == true)
		{
			board[r][c] = 'Q';

			bool Status = solveQueen(board, r + 1, dim);
			if (Status == true) return true;
			board[r][c] = 'X';

		}

		return false;
	}
}

int main()
{
	int N;
	cin >> N;

	char board[100][100];
	clearBoard(board, N);

	bool success = solveQueen(board, 0, N);

	if (success) outputBoard(board, N, N);
	else cout << "Couldn't solve it!!!" << endl;

}