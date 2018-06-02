#include<iostream>

using namespace std;

int reverse(int arr[],int n)
{
	for(int i=n-1;i>=0;--i) 
	{
		cout<<arr[i]<<endl;
	}
}


int main()
{
	int n,arr[100];

	cin>>n;

	for(int i=0;i<n;++i) cin>>arr[i];

	reverse(arr,n);


}