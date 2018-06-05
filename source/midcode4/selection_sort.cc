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

int smallestEle(int arr[], int beg, int end)
{
	int smallestIdx=beg;
	int cur=beg;
	while(cur<=end)
	{
		if(arr[cur]<arr[smallestIdx]) smallestIdx=cur;
		cur++;
	}
	return smallestIdx;
}

void selection_sort(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
	int Idx=smallestEle(arr, i, n-1);
	myswap(arr[i],arr[Idx]);
	}
}

void output_array(int arr[], int n)
{
	for(int j=0;j<n;++j) cout<<arr[j]<<" ";
}
int main()
{
	int n,arr[100];
	cin>>n;
	input_array(arr,n);
	selection_sort(arr,n);
	output_array(arr,n);
}