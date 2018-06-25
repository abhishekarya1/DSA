#include<iostream>
#include<cstring>

using namespace std;

int cnt;

int getCount(char str[], int len)
{
	for (int first = 0; first < len; first++)
	{
		for (int last = len - 1; last >= first; last--)
		{
            bool flag = true;
			int i = first;
			int j = last;
			while (i < j)
			{
				if (str[i] != str[j]) 
					{
						flag = false; 
						break;
					} 
			i++; 
			j--;
			}
			
			if (flag == true)
			{
				cnt++;
			}
		}
	}
    return cnt;
}

int main()
{
	char str[100];
	int i = 0;
	cin >> str;
	int len = strlen(str);
	cout << getCount(str, len);
}