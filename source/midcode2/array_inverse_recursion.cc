#include<iostream>

using namespace std;

int reverse(int arr[],int n)
{	

	cout<<arr[n-1]<<" ";
	if(n>=2) reverse(arr,n-1);
}


int main()
{
	int n,arr[100];

	cin>>n;

	for(int i=0;i<n;++i) cin>>arr[i];

	reverse(arr,n);


}