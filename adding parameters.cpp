#include<iostream>
using namespace std;
class a{
	public:
	int add(int a,int b){
		return a+b;
	}
	int add(int a,int b,int c){
	return a+b+c;
}
};
int main(){
	a a1;
	cout<<"the result after adding two parameters:"<<a1.add(1,2)<<endl;
	cout<<"the result after adding three parameters:"<<a1.add(1,2,3)<<endl;
	return 0;	
}
