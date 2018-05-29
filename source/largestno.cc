#include<iostream>

using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter numbers :"<<endl;
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<"largest number is = "<<a<<endl;
	}
	else if(b>c){
		cout<<"largest number is = "<<b<<endl;
	}
	else{
		cout<<"largest number is = "<<c<<endl;
	}
}