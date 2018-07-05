#include<iostream>

using namespace std;

int incp(int n) {

	if (n == 0) return 0;
	if (n > 0) cout << incp(n - 1) << n << " " ;

}

int main()
{
	int n;
	cin >> n;
	incp(n);
}