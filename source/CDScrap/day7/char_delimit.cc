#include<iostream>

using namespace std;

int main()
{
	char str[100];
	int i = 0, nalpha = 0;

	cin.getline(str, 90, '$');

	while (str[i] != '\0')
	{
		switch (str[i]) {
		case ' ' :
		case '\n':
		case '\t':
			break;
		default: nalpha++;
		}
		++i;
	}
	cout << nalpha;
}

/*
int main(){
	char c;
	while(true)
	{
		cin>>c;
		if(ch=='$') break;
		++cnt;
	}
	cout<<cnt;
}
*/