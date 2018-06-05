#include<iostream>

using namespace std;

char mostFrequent(char str[])
{
    int max=0;
    int count=0;
    char maxCharcter;
    for(char q='A';q<='z';q++)
        
    {
        count = 0;
        for(int i=0; i<strlen(str);i++)
        {
            if(str[i]==q)
                count++;
        }
        
        if(count>max)
        {
            max=count;
            maxCharcter=q;
        }
    }
    
    return maxCharcter;
    
}

int main()
{
    char str[1000];
    cin>>str;
    cout<<mostFrequent(str);
}
