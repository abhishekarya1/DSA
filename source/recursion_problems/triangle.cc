#include<iostream>

using namespace std;

void tri_pat(int n)
{
	cout<<"*";
	tri_pat(n+1);
}

int main()
{
	int n;
	cin>>n;
	tri_pat(n);
}