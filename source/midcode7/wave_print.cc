#include<iostream>

using namespace std;

void input_array(int arr[][10], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++) cin>>arr[i][j];
	}
}

void wave_print(int arr[][10], int m, int n)
{
	for(int i=0;i<n;i++)
	{
		if(i%2==0) for(int j=0;j<m;j++) cout<<arr[j][i]<<" ";
		else for(int j=m-1;j>=0;j--) cout<<arr[j][i]<<" ";
	}
}

int main()
{
	int arr[10][10], m, n;
	cin>>m>>n;
	input_array(arr,m,n);
	wave_print(arr,m,n);
}