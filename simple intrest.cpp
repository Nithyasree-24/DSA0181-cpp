#include<iostream>
using namespace std;
int main(){
	int p=200000,t=3,r1=12,r2=10,si;
	char c='y';
	if(c=='y'){
		si=(p*t*r1)/100;
	}
	else{
		si=(p*t*r2)/100;
	}
	cout<<"simple intrest:"<<si<<endl;
	return 0;
}
