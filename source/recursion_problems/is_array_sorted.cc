#include<iostream>

using namespace std;

void input_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

bool isSorted(int *arr, int n)
{

	if (arr[n - 1] > arr[n - 2]) return true;
	else return false;
	isSorted(arr, n - 1);

}

int main()
{
	int arr[10], n;
	cin >> n;
	input_array(arr, n);
	if(isSorted(arr, n)==true) cout<<"true";
	else cout<<"false";
}