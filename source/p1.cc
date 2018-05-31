#include<iostream>
 
using namespace std;
   
int main(){
   
    int i, j, n;
    bool isPrime=true;
 
    cin>>n;
   
    for(i = 2; i <= n; i++){
        isPrime = true;
        // Check whether i is prime or not
        for(j = 2; j <= i/2; j++){
             // Check If any number between 2 to i/2 divides I 
             // completely If yes the i cannot be prime number
             if(i % j == 0){
                 isPrime = false;
                 break;
             }
        }
           
        if(isPrime==true) cout << i << " ";
    }
 
 }