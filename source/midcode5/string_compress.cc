#include<iostream>
#include<cstring>
using namespace std;
void string_compress(char str[])
{
    for(int i=0;i<strlen(str);i++)
    {
        int count=0;
        for(int j=0;j<=strlen(str);j++)
        {
            if(str[i]==str[j])
            {
              
                count++;
            }
        }
         if(str[i]!=str[i+1])
         {cout<<str[i];
        if(count>1)cout<<count;
         }
    }
}
int main() {
    char str[100];
    cin>>str;
    string_compress(str);
}