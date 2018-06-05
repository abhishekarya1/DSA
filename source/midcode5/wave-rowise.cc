#include<iostream>

using namespace std;

void input_array(int arr[][100], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++) cin>>arr[m][n];
	}
}

void wave_print_row(int arr[][100], int row, int col)
{
	for(int i=0;i<row;i++)
	{
		if(row%2==0) for(int j=0;j<col;j++) cout<<arr[i][j]<<", ";
		else for(int j=col-1;j>=0;j--) cout<<arr[i][j]<<", ";
	}
	cout<<"END";
}

int main()
{
	int m,n,arr[100][100];
	cin>>m>>n;

	input_array(arr,m,n);
	wave_print_row(arr,m,n);
}