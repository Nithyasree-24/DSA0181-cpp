#include<iostream>
using namespace std;
int main(){
	char grade;
	double salary,bonus,total;
	cout<<"enter the grade of the employee:";
	cin>>grade;
	cout<<"enter the salary of the employee:";
	cin>>salary;
	if(grade=='A'){
		bonus=0.05*salary;
	}
	else if(grade=='B'){
		bonus=0.10*salary;
	}
	if(salary<10000){
		bonus+=0.02*salary;
	}
	total=salary+bonus;
	cout<<"Salary:"<<salary<<endl;
	cout<<"Bonus:"<<bonus<<endl;
	cout<<"Total:"<<total<<endl;
	return 0;
}
