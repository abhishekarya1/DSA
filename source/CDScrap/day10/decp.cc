#include<iostream>

using namespace std;

int decp(int n) {
	if (n == 0) return 0;
	if (n > 0) cout<<n;
	decp(n-1);
	}

int main()
{
	int n;
	cin >> n;
	decp(n);
}