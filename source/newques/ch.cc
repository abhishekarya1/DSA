#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char str[1000];
    int i = 1, count = 0;

    cin >> str;
    int temp;
    temp = str[0];

    while (str[i] != '\0')
    {
        if (str[i] == temp) count++;
        else if (str[i] != temp && count > 1)
        {
            cout << str[i] << count;
        }
        temp = str[i];
        ++i;
    }
}