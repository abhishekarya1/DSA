#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	if(n%4==0)
	{

		if(n%100==0)
		{
			if(n%400==0)
			{
				cout<<"Leap";
			}
			else cout<<"Not Leap";
		}
		else cout<<"Leap";
		
	}
	else cout<<"Not Leap";
}