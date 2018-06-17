#include<iostream>

using namespace std;

void subs(char *strin, char *strout, int i, int j)
{
	if(strin[i] == '\0') 
	{
		strout[j] = '\0';
		cout << strout << ", ";
		return;
	}

	subs(strin, strout, i+1, j);
	strout[j] = strin[i];
	subs(strin, strout, i+1,j+1);
}

int main()
{
	char strin[100], strout[100];

	cin >> strin;

	subs(strin, strout, 0, 0);
}