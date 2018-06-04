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
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;++j)
		{
			if(arr[j]>arr[j+1]) 
				{swap(arr[j],arr[j+1]);
			flag=false;}
		}
		if(flag==true) break;
	}
}

int binary_search(int arr[], int n, int x)
{	
	int first = 0;
	int last = n-1;
	int middle = (first+last)/2;
	while (first <= last)
	{
		if(arr[middle] < x)
		{
			first = middle + 1;

		}
		else if(arr[middle] == x)
		{
			return middle;
			break;
		}
		else
		{
			 last = middle - 1;
		}
	 middle = (first + last)/2;
}
if(first>last) return -1;
}

int main()
{
	int n,arr[100];
	cin>>n;
	int x;
	input_array(arr,n);
	cin>>x;
	bubble_sort(arr,n);
	cout<<binary_search(arr,n,x);

}