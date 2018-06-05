#include<iostream>

using namespace std;

void input_array(int arr[], int n)
{
	for(int i=0;i<n;i++) cin>>arr[i];
}

void myswap(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}


void bubble_sort(int arr[], int n)
{
	for(int i=0;i<n-1;++i)
	{
		for(int j=0;j<n-i-1;j++)
		{

		if(arr[j]>arr[j+1])
		myswap(arr[j],arr[j+1]);

		}
	}
}

void output_array(int arr[], int n)
{
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}

void finder(int arr[], int n, int target)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;++k)
			{
				if(arr[i]+arr[j]+arr[k]==target && arr[i]<arr[j] && arr[j]<arr[k]) cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;
			}
		}
	}
}

int main()
{
	int n,arr[100];
	cin>>n;

	input_array(arr,n);
	int target;
	cin>>target;
	bubble_sort(arr,n);
	output_array(arr,n);
	finder(arr,n,target);
}