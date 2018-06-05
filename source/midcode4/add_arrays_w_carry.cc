#include<iostream>

using namespace std;

void input_array(int arr[], int n)
{
	for(int i=0;i<n;++i) cin>>arr[i];
}

int adder(int arrn[], int n,int arrm[], int m)
{
	int i=n-1,num=0,digit=0;
	int newarr[100];
	newarr[0]=0;
	for(int p=n-1;p>0;p--)
	{
		for(int q=p;q>=p;q--)
		{
			num=arrn[p]+arrm[q]+newarr[i];
			while(num)
			{
				digit= num%10;
				newarr[i]=digit;
				num=num/10;
				--i;
			}
		}
	}
	for(int t=0;t<n;t++) cout<<newarr[t]<<" ";
} 

int main()
{
	int n,m,arrn[100],arrm[100];
	cin>>n>>m;
	input_array(arrn,n);
	input_array(arrm,m);
	adder(arrn,n,arrm,m);
}