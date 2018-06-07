#include<iostream>

using namespace std;

int input(int arr[],int n)
{
	for(int i=0;i<n;i++) cin>>arr[i];
}

void merge(int arr1[],int m, int arr2[], int n)
{
	int i=0, j=0;
	while(i<=m-1&&j<=n-1)
	{
		if(arr1[i]==arr2[j])
		{ cout<<arr1[i]; ++i; ++j; }
		else if(arr1[i]<arr2[j]) ++i;
		else if(arr2[j]<arr1[i]) ++j;
	}
}

int main()
{
	int arr1[10], arr2[10],m,n;

	cin>>m>>n;

	input(arr1,m);
	input(arr2,n);

	merge(arr1,m,arr2,n);
}