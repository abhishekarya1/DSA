#include<iostream>
#include<cstring>
#include<vector>
#include<cstring>

using namespace std;

vector<string> v;

char keypad [][10] = {"", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WX", "YZ"};

void printKeypad(char *in, char* out, int i, int j)
{
	if (in[i] == '\0')
	{
		out[j] = '\0';
		v.push_back(out);
		return;
	}

	int digit  = in[i] - '0';
	if (digit == 0)
	{
		printKeypad(in, out, i + 1, j);
	}
	for (int k = 0; keypad[digit][k] != '\0'; k++)
	{
		out[j] = keypad[digit][k];
		printKeypad(in, out, i + 1, j + 1);
	}
}


int main()
{
	char in[100], out[100];
	cin >> in;
	printKeypad(in, out, 0, 0);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

}