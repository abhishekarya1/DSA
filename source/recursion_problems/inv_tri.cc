#include<iostream>

using namespace std;

void inv_tri_pat(int n)
{	
	if(n<=0) return;
	for (int i = 0; i < n; i++) cout << "*" << "\t";
	cout << endl;

	inv_tri_pat(n - 1);
}

int main()
{
	int n;
	cin >> n;
	inv_tri_pat(n);
}