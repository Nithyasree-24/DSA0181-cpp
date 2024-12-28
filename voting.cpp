#include<iostream>
using namespace std;
int main(){
	int n=11;
	if(n>=18){
		cout<<"eligible for voting!";
	}
	else{
		cout<<"eligible after "<<18-n<<" years.";
	}
	return 0;
}
