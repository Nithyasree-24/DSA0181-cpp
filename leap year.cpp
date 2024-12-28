#include<iostream>
using namespace std;
int main(){
	int n=2023;
	if(n%4==0&&n%100!=0|n%400==0){
		cout<<n<<" is a leap year";
	}
	else{
		cout<<n<<" it is not a leap year";
	}
	return 0;
}
