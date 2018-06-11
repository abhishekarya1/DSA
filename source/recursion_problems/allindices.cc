#include<iostream>

using namespace std;

void input_array(int *arr, int n)
{
	for (int i = 0; i < n; i++) cin >> arr[i];
}

void allindex(int *arr, int *tmp,int cur, int n, int m, int i)
{
	if (n > 10 ) return;
	if (arr[cur] == m) {tmp[i]= cur; cout<<tmp[i]<< " ";  i=i+1;}
	allindex(arr, tmp,cur + 1, n + 1, m, i);
}

int main()
{
	int n, tmp[2], cur = 0, arr[10], m, i=0;
	cin >> n;
	input_array(arr, n);
	cin >> m;
	allindex(arr, tmp, cur, n, m, i);
}