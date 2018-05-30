#include <iostream>
using namespace std;
int main(){
    int n,val=1; 
    cin >> n;
    
    for(int curLine = 1; curLine <= n; ++curLine){
        for(int curVal = 1; curVal <= curLine; ++curVal){
            cout<<val<<" ";
            val++;
        }
        cout<<endl;
    }
}