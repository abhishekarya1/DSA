#include<iostream>

using namespace std;

int reverse(int arr[],int start,int n)
{	
	cout<<arr[start]<<" ";
	if(start<n-1) reverse(arr,start+1,n);
}


int main()
{
	int n,arr[100],start=0;

	cin>>n;

	for(int i=0;i<n;++i) cin>>arr[i];

	reverse(arr,start,n);


}