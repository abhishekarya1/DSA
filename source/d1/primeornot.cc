#include<iostream>
#include<math.h> //#include<cmath>

using namespace std;

int main()
{
	int num; 
	bool isPrime=true;  //sentinel	
	cin>>num;
	
	for(int div=2;div<num;++div)
	{
		if(num%div==0)
		{
			isPrime = false;
			break;
		}
	}

	if(isPrime==true)
		{cout<<"Prime"<<endl;}
	else
		{cout<<"Not Prime"<<endl;}


}
