#include<iostream>
using namespace std;

int main(){
	int num,evensum=0,oddsum=0;
	bool flag = true;
	cin >> num;
	int temp = num;
	while(num){
		temp = num % 10;
		if(flag == true){
			oddsum = oddsum + temp;
			flag = false;
		}
		else{
			evensum = evensum + temp;
			flag = true;	
		}
		num = num / 10;
	}
	cout << oddsum << endl << evensum;

}