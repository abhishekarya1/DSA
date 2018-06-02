#include<iostream>

using namespace std;

int max_val(int arr[],int size)
{	int i=0;
	int max=arr[0];
	for(i=1;i<size;i++)
	{
		if(arr[i]>max) max=arr[i];
	}
	return max;
}

int main()
{
	int arr[1000];
	int n;
	cin>>n;

	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	cout<<max_val(arr,n);
}