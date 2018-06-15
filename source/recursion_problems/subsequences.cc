#include<iostream>

using namespace std;

int cnt;

void printSub(char *instr, char *outstr, int i, int j)
{
	if (instr[i] == '\0')
	{
		outstr[j] = '\0';
		cnt++;
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

	printSub(instr, outstr, 0, 0);
}