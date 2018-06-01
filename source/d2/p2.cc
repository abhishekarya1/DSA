#include<iostream>

using namespace std;
int main() {
	char ch; 
	int a,b;
	
	do{
		cin>>ch;
		cin>>a>>b;
	}
	while(ch=='+'||'-'||'*'||'/'||'%'||'x'||'X');
	
	if(ch=='+') cout<<a+b;
	else if(ch=='-') cout<<a-b;
	else if(ch=='*') cout<<a*b;
	else if(ch=='/') cout<<a/b;
	else if(ch=='%') cout<<a%b;
	else if(ch=='x'||'X') cout<<"hello";

	else cout<<"Invalid operation. Try again.";

 }