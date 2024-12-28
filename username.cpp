#include<iostream>
using namespace std;
int main(){
	string user1,user2;
	cout<<"enter username:";
	cin>>user1;
	cout<<"Reenter username:";
	cin>>user2;
	if(user1==user2){
		cout<<"Valid!";
	}
	else{
		cout<<"Invalid!";
	}
	return 0;
}
