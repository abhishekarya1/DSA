#include <iostream>
using namespace std;

bool CheckValidInvalid(int n){
	bool res=true;
	int x,curEle;
	cin >> curEle; 
	bool switcher = true; // switcher = true for decreasing sequence and false for increasing sequence
	for(int i=1;i<n;i++){
		cin >> x;
		if(switcher==true){
			if(x>curEle) switcher=false;
		}
		else if(x>curEle) res=true;
		else res=false;    
		curEle=x;
	}
	return res;
}

int main(){
	int n;
	cin >> n;
	if(CheckValidInvalid(n)==0) cout<<"false";
	else cout<<"true";
}