#include<iostream>

using namespace std;

int linear_search(int arr[],int n,int m)
{	int i=0;
	for(i;i<n;++i)
		{
			if(arr[i]==m) break;
		}
		if(i==n) return -1;
		else return i;
}


int main()
{
	int n,arr[100];
	cin>>n;

	for(int i=0;i<n;++i) cin>>arr[i];

	int m;
	cin>>m;
	cout<<linear_search(arr,n,m);
}