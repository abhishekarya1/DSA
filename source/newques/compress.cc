#include<iostream>
#include<cstring>
using namespace std;
void string_compress(char str[])
{
    int count=1;
    
    for(int i=0;i<strlen(str);i++)
    {
    
        if(str[i]==str[i+1]) count++;
        
        else if(str[i]!=str[i+1])
        {
            cout<<str[i];
            if(count>1) cout<<count;
            count=1;
            
        }
    }
}
int main() {
    char str[1000000];
    cin>>str;
    string_compress(str);
}