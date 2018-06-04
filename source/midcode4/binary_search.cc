#include<iostream>

using namespace std;

void myswap(int& a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

int input_array(int arr[], int n)
{
	for(int i=0;i<n;i++) cin>>arr[i];
}

int bubble_sort(int arr[], int n)
{
	bool flag=true;
	for(int i=0;i<n-1;++i)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j+1]>arr[j])
			{ myswap(arr[j],arr[j+1]); flag=false;}

		}
		if(flag==true) break;
	}
}

int binary_search(int arr[], int n, int x)
{	
	int first=0;
	int last=n-1;
	while(first<=last)
	{
		int mid=(first+last)/2;	
		if(arr[mid]==x) return mid;
		else if(arr[mid]<x) first=mid+1;
		else last=mid-1;
	}

if(first>last) return 0;

}

int main()
{
	int n,arr[100];
	cin>>n;
	int x;
	cin>>x;
	input_array(arr,n);
	bubble_sort(arr,n);
	cout<<binary_search(arr,n,x);

}