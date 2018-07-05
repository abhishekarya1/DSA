#include<iostream>

using namespace std;

void print_array(int arr[],int n) 
{
for(int k=0;k<n;k++) cout<<arr[k]<<" ";
}

void myswap(int &n1, int &n2) 
{
	int temp=n1;
	n1=n2;
	n2=temp;
}

int bubble_sort(int arr[],int n)
{
	for(int i=0;i<n-1;++i)
	{
		for(int j=0;j<n-i-1;++j)
		{	
			if(arr[j]>arr[j+1]) myswap(arr[j],arr[j+1]);
		}
	}
	print_array(arr,n);
}

int main()
{
	int n,arr[100];
	cin>>n;

	for(int i=0;i<n;++i) cin>>arr[i];

	bubble_sort(arr,n);


}