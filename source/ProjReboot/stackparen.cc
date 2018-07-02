#include <iostream>
#include <stack>
using namespace std;
 
bool dpfinder(string str)
{
       stack<char> Stack;
 
    for (char ch : str)
    {
         if (ch == ')')
        {
            char top = Stack.top();
            Stack.pop();
 
            if (top == '(')
                return true;
 
            else
            {
                while (top != '(')
                {
                    top = Stack.top();
                    Stack.pop();
                }
            }
        }
 
        else
            Stack.push(ch);
    }
 
    return false;
}
 
int main()
{
    string str;
    cin >> str;
 
    dpfinder(str)?cout << "true ":cout << "false";
}