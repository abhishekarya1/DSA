#include<iostream>

using namespace std;

int check_inverse(int a[], int b[], int n)
{	
	int i=0;
	while(a[i]==b[i]) ++i;

	if(i<n) cout<<"false";
	else cout<<"true";
}

int inverse(int arr[], int n)
{
	int temp[100];
	for(int i=0;i<n;i++)
	{	
		int p=arr[i];
		temp[p]=i;
	}
	check_inverse(arr, temp, n);
}

int main()
{
	int n,arr[100];
	cin>>n;

	for(int i=0;i<n;++i) cin>>arr[i];

	inverse(arr,n);
}	