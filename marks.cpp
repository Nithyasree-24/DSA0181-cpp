#include<iostream>
using namespace std;
int main(){
	int m1,m2,m3,m4,tot;
	float agg;
	cout<<"enter marks in subject1:"<<endl;
	cin>>m1;
	cout<<"enter marks in subject2:"<<endl;
	cin>>m2;
	cout<<"enter marks in subject3:"<<endl;
	cin>>m3;
	cout<<"enter marks in subject4:"<<endl;
	cin>>m4;
	tot=m1+m2+m3+m4;
	cout<<"total:"<<tot<<endl;
	agg=tot/4;
	if(agg>0.75){
		cout<<"distinction";
	}
	else if(agg>=0.60&&agg<0.75){
		cout<<"first division";
	}
	else if(agg>=0.50&&agg<0.60){
		cout<<"second division";
	}
	else if(agg>=0.40&&agg<0.50){
		cout<<"third division";
	}
	else{
		cout<<"fail";
	}
	return 0;
}
