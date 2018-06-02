#include<iostream>

using namespace std;

bool reverse(int arr[],int n)
{
	int i=n-1;
	int temp[100];
	int j=0;
	while(j<=n-1)
	{
		temp[j]=arr[i];
		--i;
		++j;
	}

	for(int k=0;k<=n-1;k++) cout<<temp[k]<<" ";
		
}

int main()
{
	int n,arr[100];
	cin>>n;

	for(int i=0;i<n;++i) cin>>arr[i];

	reverse(arr,n)==0;
}