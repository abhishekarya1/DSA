#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

void printSub(char *instr, char *outstr, int i, int j)
{
	if (instr[i] == '\0')
	{
		outstr[j] = '\0';
		cout << outstr << " ";
		return;
	}

	printSub(instr, outstr, i + 1, j);
	outstr[j] = instr [i];
	printSub(instr, outstr, i + 1, j + 1);
}

int main()
{
	char instr[100], outstr[100];

	cin >> instr;

	int length = strlen(instr);

	cout << pow(2, length) << endl;

	printSub(instr, outstr, 0, 0);
}