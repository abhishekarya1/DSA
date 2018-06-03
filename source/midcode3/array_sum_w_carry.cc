#include<iostream>

using namespace std;

int sum(int a[],int b[], int n, int m)
{	int temp[100];
	for(int i=n-1;i>=n-m;i--)
	{
		for(int j=m-1;j>=0;j--)
		{
			temp[j]=a[i]+b[j]; break;
		}
	}

	for(int k=m-1;k>=0;--k) cout<<temp[k]<<" ";
}

int main()
{
	int n,m,arr1[100];
	int arr2[100];

	cin>>n;
	cin>>m;

	for(int i=0;i<n;++i) cin>>arr1[i];

	for(int j=0;j<m;++j) cin>>arr2[j];
	if(n>m)
		sum(arr1,arr2,n,m);
	else sum(arr2,arr1,m,n);		
}