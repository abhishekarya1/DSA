#include<iostream>

using namespace std;

int main()
{
	int n,arr[100],target;
	cout<<"size = "; cin>>n;

	for(int i=0;i<n;++i) cin>>arr[i];

		cout<<"target = ";
	cin>>target;
	
	for(int j=0;j<n/2;++j)
	{
		for(int k=n/2;k<n;++k)
		{
			if(arr[j]+arr[k]==target) 
				{cout<<arr[j]<<" and "<<arr[k];}
		}
		cout<<endl;
	}

}