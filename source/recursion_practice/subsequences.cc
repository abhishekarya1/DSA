#include<iostream>

using namespace std;

void printPermute(char strin[], char strout[], int i, int j)
{
	if (strin[i] == '\0')
	{
		strout[j] = '\0';
		cout << strout << endl;
		return;
	}


	printPermute(strin, strout, i + 1, j);
	strout[j] = strin[i];
	printPermute(strin, strout, i + 1, j + 1);
}

int main()
{
	char strin[100], strout[100];

	cin >> strin;

	printPermute(strin, strout, 0, 0);

}