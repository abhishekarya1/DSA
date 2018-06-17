#include<iostream>

using namespace std;

char spelling[][10] = {"zero", "one","two","three","four","five","six","seven","eight","nine"};

void fuc(int n)
{
    if(n == 0) return;
    fuc(n/10);
   cout << spelling[n%10] << " ";
    
}

int main()
{
	int n;
	cin >> n;
    fuc(n);
}