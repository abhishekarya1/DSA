#include<iostream>

using namespace std;

int main()
{	
	bool isEven=true; //to avoid garbage value
	int num;
	cin>>num;
	if (num%2==0?true:false)
	{cout<<isEven;}
else{
	isEven=false;
	cout<<isEven;
}
}