#include<iostream>

using namespace std;

void clearBoard(char board[][100], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++) board[i][j] = 'X';
	}
}

void output_solved(char board[][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) cout << board[i][j] << " ";
		cout << endl;
	}

}
bool canPlace(char board[][100], int r, int c, int dim)
{
	for (int i = 0; i < dim; i++)
	{
		if (board[i][c] == 'Q') return false;
	}

	int rowDir[] = { -1, +1};
	int colDir[] = { -1, +1};
	for (int dir = 0; dir < 2; dir++)
	{
		for (int dist = 0; dist < dim; dist++)
			
		{	int nextRow = r + dist * rowDir[dir];
			int nextCol = c + dist * colDir[dir];

		if (nextRow >= dim || nextRow < 0 || nextCol > 0 || nextCol >= dim) break;

		if (board[nextRow][nextCol] == 'Q') return false;
	}
}

	return true;

}

bool solveQueen(char board[][100], int r, int dim)
{
	for (int c = 0; c < dim; c++)
	{
		bool check = canPlace(board, r, c, dim);
		if (check == true)
		{	board[r][c] = 'Q';
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
	clearBoard(board, n, n);

	solveQueen(board, 0, n);

	output_solved(board, n);

	return 0;
}