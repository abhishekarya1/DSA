#include<iostream>

using namespace std;

int conv1(int a,int b,int c)
{
	int digit=0,i=1,res=0;

	while(c!=0)
	{
		digit=c%b;
		res=res+(i*digit);
		i*=10;
		c=c/b;
	}
	return res;

}

int conv2(int a,int b,int c)
{
	int digit=0,base=1,res=0;

	while(c!=0)
	{
		digit=c%10;
		res=res+digit*base;
		base=base*a;
		c=c/10;
	}
	return res;

}

int conv3(int sb,int db,int sn)
{ 
	return conv1(10,db,conv2(sb,10,sn));
}


int main()
{
	int sb,db,sn;
	cin>>sb>>db>>sn;
	
	if(sb==10) cout<<conv1(10,db,sn);
	else if(db==10) cout<<conv2(sb,10,sn);
	else cout<<conv3(sb,db,sn);
}