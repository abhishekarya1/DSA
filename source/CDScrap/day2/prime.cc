#include<iostream>

using namespace std;

int main()
{
	int n;
	bool p=true;
	cin>>n;
	for(int i=2;i<n;++i)
	{
		if(n%i==0)
		{
		p=false;
	}
	}
	if(p==true){cout<<"prime";}
	else{cout<<"non-prime";}

}