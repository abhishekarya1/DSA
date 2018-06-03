#include<iostream>

using namespace std;

int check_inverse(int a[], int b[], int n)
{
	int temp[100];
	int i=0,k=0;
	for(i;i<n;++i)
	{
		int p=a[i];
		temp[p]=i;
	}
	while(temp[k]==b[k]) k++;

	if(k<n) cout<<"false";
	else cout<<"true";
}

int main()
{
	int n,arr1[100],arr2[100];
	cin>>n;

	for(int i=0;i<n;i++) cin>>arr1[i];

	for(int j=0;j<n;j++) cin>>arr2[j];

	check_inverse(arr1,arr2,n);
}