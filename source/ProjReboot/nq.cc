#include<iostream>
#include<vector>

using namespace std;

vector<int> v;

void clearBoard(char board[][100], int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) board[i][j] = 'X';
	}
}

void outputBoard_config(char board[][100], int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) if(board[i][j]=='Q') {v.push_back(i+1) v.push_back(j+1);}
	}

}

bool canPlace(char board[][100], int r, int c, int dim)
{
	for (int x = 0; x < r; x++)
	{
		if (board[x][c] == 'Q') return false;
	}

	int rowDir[] = {-1, -1};
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
	if (r == dim)
		{
			outputBoard_config(board, dim);
			cout << " ";
			return false;
		    
		}

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

	
	}
		return false;
}

int main()
{
	int N;
	cin >> N;

	char board[100][100];
	clearBoard(board, N);
	solveQueen(board, 0, N);
	for(int i=0;i<v.size()-1;i++)
	{
		cout <<"{"<<v[i]<<"-"<<v[i+1]<<"}";
	}

}