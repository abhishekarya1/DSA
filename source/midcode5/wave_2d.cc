#include<iostream>

using namespace std;

int input_array(int arr[][100], int m, int n)
{	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++) cin>>arr[i][j];
	}

}

void wave_print(int arr[][100], int row, int col)
{
	for(int i=0;i<col;i++)
	{
	if(i%2==0)
		{
		for(int j=0;j<row;j++) cout<<arr[j][i]<<", ";
		}
	else
	{
		for(int j=col-1;j>=0;j--) cout<<arr[j][i]<<", ";
	}
	}
	cout<<"END";
}

int main()
{
	int n,arr1[100][100],m;
	cin>>m>>n;

	input_array(arr1,m,n);
	wave_print(arr1,m,n);

}