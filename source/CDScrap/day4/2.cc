#include<iostream>

using namespace std;

double formula(int fahr)
{
	return (fahr-32)*(5.0/9);
}

void converter( int a , int b, int c)
{
	for(int i=a;i<=b;i=i+c)
	{
		cout<<i<<" "<<formula(i)<<endl;
	}
}

int main()
{

int converter(int,int,int);
	
int initial,final,step;
cin>>initial>>final>>step;

converter(initial,final,step);

return 0;
}