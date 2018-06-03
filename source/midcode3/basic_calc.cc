#include<iostream>
using namespace std;

int calc(char ch){

double n1,n2;
 
 if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%')
 {
         cin>>n1>>n2;
       if(ch=='+'){
         cout<<n1+n2<<endl;
     }
     else if(ch=='-'){
         
         cout<<n1-n2<<endl;
     }
     else if(ch=='*'){
         
            cout<<n1*n2<<endl;
     }
     else if(ch=='/'){
         
         if(n2!=0) cout<<n1/n2<<endl;
     }
     else if(ch=='%'){
  
         if(n2!=0){
             cout<<(int)n1%(int)n2<<endl;
         }
     }
}   
else {cout<<"Invalid operation. Try again."<<endl;}
return 0;  
}
int main(){
    
    char ch;
    do{
        cin>>ch;
        if(ch=='x'||ch=='X') break; 
        else calc(ch);
        }while(ch);

    return 0;

}