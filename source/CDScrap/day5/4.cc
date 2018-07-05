#include<iostream>

using namespace std;

void print_array(int arr[],int n) 
{
for(int k=0;k<n;k++) cout<<arr[k]<<" ";
}
int myswap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

int insertion_sort(int arr[],int n)
{
	for(int i=1;i<n;++i)
		{int j=i-1,tmp=arr[i];
	while(j>=0 && arr[j]>tmp)
	{
		arr[j+1]=arr[j];
		--j;
	}
	arr[j+1]=tmp;
}
	print_array(arr,n);

}
int main()
{
	int n,arr[100];
	cin>>n;
 
	for(int i=0;i<n;++i) cin>>arr[i];

	insertion_sort(arr,n);
}