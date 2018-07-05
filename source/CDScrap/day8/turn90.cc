#include<iostream>

using namespace std;

void input(int arr[][10], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;++j) cin>>arr[i][j];
	}
}

void turn(int arr[][10], int m, int n)
{
	for(int i=0;i<n;++i)
	{
		for(int j=m-1;j>=0;--j) cout<<arr[j][i]<<" ";
			cout<<endl;
	}
}

int main()
{
	int arr[10][10], m, n;
	cin>>m>>n;

	input(arr,m,n);
	turn(arr,m,n);
}