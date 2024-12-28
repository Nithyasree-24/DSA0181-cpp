#include<iostream>
using namespace std;
int main(){
	string data="mom",temp;
	int len;
	len=data.length()-1;
	while(len>=0){
		temp+=data[len];
		len--;
	}
	if(data==temp){
		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"not a palindrome"<<endl;
	}
	return 0;
}
