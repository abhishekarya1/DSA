
#include<iostream>

using namespace std;

template <typename X, typename Y>
Y bigger(X a, Y b)        // Generic Function with a generic Return Type (X)
{
	if(a > b) return a;
	else return b;
}

int main()
{
	cout << bigger(14.2,7);
}