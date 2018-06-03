#include<iostream>

using namespace std;

// int check_inverse(int arr[],int temp[],int n)
// {	int count=0;
// 	for(int i=0;i<n;++i)
// 	{
// 	while(arr[i]==temp[i]) ++count; 
// 	}
// 	if(count<n) cout<<"false";
// }

int inverse(int arr[],int n)
{
	int temp[100];
	for(int i=0;i<n;++i)
	{
		int p=arr[i];
		temp[p]=i;
	}
	 for(int j=0;j<n;j++) cout<<temp[j]<<" ";

	// check_inverse(arr,temp,n);
}

int main()
{
	int n,arr[100];
	cin>>n;

	for(int i=0;i<n;i++) cin>>arr[i];

	inverse(arr,n);
}