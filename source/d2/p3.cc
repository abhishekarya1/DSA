#include<iostream>

using namespace std;

int main()
{
	int iter=1,series=0,i=1,n1,n2;
	cin>>n1>>n2;

	do{
		series=(3*i)+2;
		
		if(series%n2==0)
			{
				++i; 
				continue;
				}	
			
			i++; 
			iter++;
			cout<<series<<" ";
			

	}
	while(iter<=10);


}
