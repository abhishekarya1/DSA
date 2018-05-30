#include <iostream>
using namespace std;
int main() {
    int nLines;
    cin >> nLines;

        for (int curLine = 1; curLine <= nLines; ++curLine) {
        int nSpaces = 2*(nLines - curLine);
        int nStars = 2 * curLine - 1;
        for(int i = 1; i <= nSpaces/2; ++i) cout << " ";
        for(int i = 1; i <= nStars; ++i)  cout << "*";
        	for(int i = 1; i <= nSpaces/2; ++i) cout << " ";
        cout << endl;
    }
}