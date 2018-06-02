#include<iostream>

using namespace std;

bool reverse(int arr[],int n)
{
	int i=n-1;
	int temp[100];
	int j=0;
	while(i>=0)
	{
		temp[j]=arr[i];
		--i;
		++j;
	}

	int k=0;
		while(temp[k]==arr[k]) ++k;
		if(k<n) return false;
		else return true;
}

int main()
{
	int n,arr[100];
	cin>>n;

	for(int i=0;i<n;++i) cin>>arr[i];

	if(reverse(arr,n)==0) cout<<"false";
	else cout<<"true";
}