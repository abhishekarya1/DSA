#include <iostream>
using namespace std;
int main() {
    int num;
    bool isPrime=true;
    cin>>num;
    for(int div=2;div<num;++div)
    {
        if(num%div==0)
        {
            isPrime=false;
            break;
        }
    }
    if(isPrime==false) cout<<"Not Prime"<<endl;
    
    else cout<<"Prime"<<endl;
}
