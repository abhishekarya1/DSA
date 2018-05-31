#include<iostream>
using namespace std;
int main() {
   while(true)
   {
        int flag =0;
       char input;
       while(true)
       {
           cin >> input;
           if(input=='+' || input=='-' || input=='*' || input=='/' || input=='%')
           {
               break;
           }
           else{
               if(input == 'x' || input=='X')
               {
                   flag =1;
                    break;
               }
               else
               {
                   cout<<"Invalid operation. Try again"<<endl;
               }
           }
       }
        if(flag==1)
        {
            break;
        }
        
       int n1,n2=0;
        do
        {
            if(input == '/' || input=='%')
            { 
                // cin >> n1;
                while(n2==0)
                {
                    cin >>n1>> n2;
                }
            }
            else
            {
                cin >> n1 >> n2;
            }
        }while(n1<0 || n2<0 || n1>=100000000 || n2>=100000000);
       int res;
       if(input == '+')
       {
            res = n1 + n2;
       }
       if(input == '-')
       {
            res = n1 - n2;
       }
       if(input == '*')
       {
            res = n1 * n2;
       }
       if(input == '/')
       {
            res = n1/n2;
       }
       if(input == '%')
       {
            res = n1%n2;
       }
       cout<<res<<endl;
   }
    return 0;
}