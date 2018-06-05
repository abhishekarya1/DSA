#include<iostream>

using namespace std;

void input_array(int arr[],int n)
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

void output_array(int arr[], int n)
{
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}

int main()
{
	int n,arr[100];
	cin>>n;
	input_array(arr,n);
	bubble_sort(arr,n);
	output_array(arr,n);
}