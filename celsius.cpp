#include<iostream>
using namespace std;
int main(){
	double celsius,fahrenheit;
	cout<<"enter the temperature in fahrenheit:"<<endl;
	cin>>fahrenheit;
	celsius=(fahrenheit-32)*5.0/9.0;
	cout<<"temperature in celsius:"<<celsius<<endl;
	return 0;
}
