#include<iostream>

using namespace std;

int main()
{
	int arr[10];
	int *ptr = &arr[0];
	cout << ptr; // first element
	cout << endl;
	cout << arr; // address of array

	cout<<endl;

	cout << ptr+1; // first element + 1
	cout << endl;
	cout << arr+1; // address of array + 1

}