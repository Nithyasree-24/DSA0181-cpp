#include<iostream>
using namespace std;
int main(){
	int a,b,temp,n1=4,n2=6;
	a=n1;
	b=n2;
	while(b>0){
		temp=b;
		b=a%b;
		a=temp;
	}
	int gcd=a;
	int lcm=(n1*n2)/gcd;
	cout<<"GCD:"<<gcd<<endl;
	cout<<"LCM:"<<lcm<<endl;
	return 0;
}
