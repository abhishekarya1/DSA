#include<iostream>

using namespace std;

template <typename T>
T bigger(T a, T b)
{
	if(a > b) return a;
	else return b;
}

int main()
{
	cout << bigger(14.2,7.2);
}