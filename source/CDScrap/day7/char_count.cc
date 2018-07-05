#include <iostream>
using namespace std;

void print(char label[], int cnt) {
    cout << label << ":" << cnt << endl;
}



bool isAlpha(char ch,char prev)
{
    return (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z');
}

bool isDigit(char ch, char prev)
{
    return (ch >= '0' && ch <= '9');
}

bool isWhitespace(char ch, char prev)
{
    return (ch == ' ' ||ch == '\t' || ch == '\n');
}


void cntData(int& nChar, int &nWords, int & ndigit, int &nOther, int &nWhiteSpace, int &nSpace) {
    char cur;
    char previous = ' ';
    while (true)
    {
        cin >> cur;
        if (cur == '$') break;
        if (isAlpha(cur)) {
            ++nChar;
            if (isWord(cur, previous)) ++nWord;
        }
        else if (isDigit(cur)) ++ndigit;
        else if (isWhitespace(cur)) ++nWhiteSpace;
        else nOther++;

        previous=cur;
    }
}

int main() {
        int nChar = 0;
        int nWords = 0;
        int ndigit = 0;
        int nOther = 0;
        int nWhiteSpace = 0;
        int nSpace = 0;

        cntData(nChar, nWords, ndigit , nOther, nWhiteSpace, nSpace);

        print("nChar", nChar);
        print("nWords", nWords);
        print("nOther", nOther);
        print("nWhiteSpace", nWhiteSpace);
        print("nSpace", nSpace);
    }