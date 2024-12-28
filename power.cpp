#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double base,exponent,result;
	cout<<"enter the base:";
	cin>>base;
	cout<<"enter the exponent:";
	cin>>exponent;
	result=pow(base,exponent);
	cout<<"power:"<<result<<endl;
	return 0;
}
