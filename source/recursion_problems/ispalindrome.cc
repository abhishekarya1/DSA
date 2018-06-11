#include<iostream>

using namespace std;

void input_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

int ispalindrome(int *arr, int n, int cur)
{
	if(n<1 && n<cur) return 0;

	if(arr[n-1]!=arr[cur]) return 0;
	ispalindrome(arr,n-1,cur+1);
}

int main()
{
	int arr[10], n, cur=0;
	cin>>n;
	input_array(arr,n);
	ispalindrome(arr,n,cur)==0?cout<<"false":cout<<"true";
}