#include<iostream>
#include<iomanip>

using namespace std;

const int D = 8;

bool canPlace(int board[D][D], int n, int r, int c)
{
	return
	    r >= 0 && r < n &&
	    c >= 0 && c < n &&
	    board[r][c] == 0;
}

bool solveKnight(int board[D][D], int n, int move, int cur_row, int cur_col)
{
	if (move == n * n) return true;

	int r_dir[] = { +2, +1, -1, -2, -2, -1, +1, +2};
	int c_dir[] = { +1, +2, +2, +1, -1, -2, -2, -1};

	for (int cur_dir = 0; cur_dir < 8; cur_dir++)
	{
		int next_row = cur_row + r_dir[cur_dir];
		int next_col = cur_col + c_dir[cur_dir];
		if (canPlace(board, n, next_row, next_col) == true)
		{
			board[next_row][next_col] = move + 1;
			bool isSuccessful = solveKnight(board, n, move + 1, next_row, next_col);
			if (isSuccessful == true) return true;
			board[next_row][next_col] = 0;
		}
	}
	return false;
}

void print(int board[D][D], int n)
{
	for ( int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(3) << board[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int board[D][D] = {0};
	int n; cin >> n;
	board[0][0] = 1;
	bool ans = solveKnight(board, n, 1, 0, 0);
	if (ans == true) print(board, n);
	else cout << "No!!!";
}