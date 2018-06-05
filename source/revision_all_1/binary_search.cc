#include<iostream>

using namespace std;

int input_array(int arr[],int n)
{
	for(int i=0;i<n;i++) cin>>arr[i];
}

void myswap( int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

void bubble_sort(int arr[], int n)
{
	bool flag=true;
	for(int i=0;i<n-1;++i)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1]) myswap(arr[j],arr[j+1]);
			flag=false;
		}
		if(flag==true) break;
	}
}

int binary_search(int arr[],int n,int x)
{
	int first=0;
	int last=n-1;
	int mid=(first+last)/2;
	while(first<=last)
	{
		if(arr[mid]==x) 
			{
				return mid; break;}
		else if(arr[mid]>x) last=mid-1;
		else if(arr[mid]<x) first=mid+1;
		mid=(first+last)/2;
	}
}



int output_array(int arr[],int n)
{
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}

int main()
{
	int n, arr[100];
	cin>>n;
	int x;
	input_array(arr,n);
	cin>>x;
	bubble_sort(arr,n);
	cout<<"Found at -> "<<binary_search(arr,n,x)<<" index.";

}