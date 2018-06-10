#include<iostream>

using namespace std;

void input_array(int arr[][10],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++) cin>>arr[r][c];
	}
}

void spiral_print(int arr[][10], int r, int c)
{
	
}

int main()
{
	int arr[10][10],r,c;
	cin>>r>>c;
	input_array(arr,r,c);
	spiral_print(arr,r,c);
}