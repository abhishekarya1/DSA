#include<iostream>

using namespace std;

int main()
{
	int y;
	cin>>y;

	if(y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0) cout<<"Leap";
			else cout<<"Not Leap";
		}
		else cout<<"Leap";
	}
	else cout<<"Not Leap";
}