#include<iostream>
using namespace std;
int main(){
	int n=15;
	if(n%3==0&&n%5==0){
		cout<<"the number is divisible by both 3 and 5"<<endl;
	}
	else{
		cout<<"the number is not divisible by both 3 and 5"<<endl;
	}
	return 0;
}
