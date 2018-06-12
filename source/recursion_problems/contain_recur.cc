#include<iostream>

using namespace std;

void input_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

bool isThere(int *arr, int n, int m, int cur)
{	
	if (cur > n) return false;
	isThere(arr, n, m, cur + 1);
	if (arr[cur] == m) return true;
	else return false;  
}

int main()
{
	int arr[10], n, m, cur=0;

	cin >> n;
	input_array(arr, n);
	cin >> m;
	if (isThere(arr, n, m, cur) == true) cout << "true";
	else cout<<"false"; 	

}