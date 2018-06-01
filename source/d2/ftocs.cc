#include<iostream>

using namespace std;

int main()
{
	int min,max,step;
	int c=0;
	cin>>min>>max>>step;

	for(int i=min;i<=max;i=i+step)
	{

	c = 5*(i-32)/9;

	cout<< i << " " << c << endl;

	}

}