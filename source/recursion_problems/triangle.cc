#include<iostream>

using namespace std;

void tri_pat(int n)
{
	if (n <= 0) return;
	tri_pat(n - 1);
	for(int i=0;i<n;i++) cout << "*" << "\t";

	cout<<endl;
}

int main()
{
	int n;
	cin >> n;
	tri_pat(n);
}