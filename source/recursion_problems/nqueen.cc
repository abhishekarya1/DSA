#include<iostream>

using namespace std;

void clearBoard(char board[][100], int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) board[i][j] = 'X';
	}
}

void outputBoard(char board[][100], int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) cout << board[i][j] << " ";
	}
	cout << endl;
}

bool canPlace(char board[][100], int r, int c, int dim)
{
	for (int x = 0; x < r; x++)
	{
		if (board[x][c] == 'Q') return false;
	}

	int rowDir[] = {-1, +1};
	int colDir[] = { -1, +1};

	for (int dir = 0; dir < 2; dir++)
	{
		for (int dist = 0; dist < dim; dist++)
		{
		int nextRow = r + dist * rowDir[dir];
		int nextCol = c + dist * colDir[dir];

		if (nextRow < 0 || (nextRow >= dim) || (nextCol < 0) || nextCol >= dim) break;

		if (board[nextRow][nextCol] == 'Q') return false;
	}
}

	return true;

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

	if (success) outputBoard(board, N);
	else cout << "Couldn't solve it!!!" << endl;

}