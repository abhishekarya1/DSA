#include<iostream>

using namespace std;

int binary_search(int arr[],int n,int m)
{
	int mid,lbound=0,ubound=n-1;
	while(lbound<=ubound)
	{
		mid=(lbound+ubound)/2;
		if(m>arr[mid])
			lbound=mid+1;
		else if(m<arr[mid])
			ubound=mid-1;
	}
	
}

int main()
{
	int n,arr[100];
	cin>>n;

	for(int i=0;i<n;++i) cin>>arr[i];
	
	int m;
	cin>>m;
	cout<<binary_search(arr,n,m);
}