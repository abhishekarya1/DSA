#include<iostream>

using namespace std;

void input_array(int arr[], int n)
{
	for(int i=0;i<n;i++) cin>>arr[i];
}

void myswap(int &a, int&b)
{
	int temp=a;
	a=b;
	b=temp;
}

int smallestEle(int arr[], int beg, int end)
{
	int smallestEle=beg;
	int cur=beg;
	while(cur<=end)
	{
		if(arr[cur]<arr[smallestEle]) smallestEle=cur;
		++cur;
	}
	return smallestEle;
}

int selection_sort(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
	int Idx=smallestEle(arr,i,n-1);
	myswap(arr[i],arr[Idx]);
	}
}

int finder(int arr[], int n, int target)
{
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			if(arr[i]+arr[j]==target && arr[i]<arr[j]) cout<<arr[i]<<" and "<<arr[j];
			cout<<e
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
	selection_sort(arr,n);
	finder(arr,n,target);
}	