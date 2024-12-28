#include<iostream>
using namespace std;
int main(){
	double bill=0.0;
	int units;
	cout<<"enter the number of units consumed:";
	cin>>units;
	if(units<=100){
		bill=units*5;
	}
	else if(units<=300){
		bill=(100*5)+((units-100)*8);
	}
	else{
		bill=(100*5)+(200*8)+((units-300)*10);
	}
	cout<<"the total electricity bill:rs."<<bill<<endl;
	return 0;
}
