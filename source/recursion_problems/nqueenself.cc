#include<iostream>

using namespace std;

void clearBoard(char board[][100], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++) board[i][j] = 'X';
	}
}

bool solveQueen(char board[][100], int r, int dim)
{
	for (int c = 0; c < dim; c++)
	{
		bool check = canPlace(board, r, c, dim);
		if(check == true) 
		board[r][c] = 'Q';
		 bool status = solveQueen(board, r+1, dim);
		 if(status == true) return true;
		 board[r][c] = 'X';
	}
}

int main()
{
	int n;
	cin >> n;

	char board[100][100];
	clearBoard(board, n, n);

	solveQueen(board, 0, n);
}