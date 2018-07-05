#include<iostream>

using namespace std;

int inputArr(int arr[][10],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++) cin>>arr[i][j];
	}
}

void diagonalPrimPrint(int arr[][10], int m, int n)
{
	int i=0,j=0;
	while(i!=m)
	{
		cout<<arr[i][j]<<" ";
		j++;
		i++;
	}
}

void diagonalSecPrint(int arr[][10], int m,int n)
{ 	int i=0;
	while(i!=m)
	{
		cout<<arr[i][n-1]<<" ";
		n--;
		i++;
	}
}

int main()
{
	int arr[10][10],m, n;

	cin>>m>>n;

	inputArr(arr,m,n);
	diagonalPrimPrint(arr,m,n);
	diagonalSecPrint(arr,m,n);
}