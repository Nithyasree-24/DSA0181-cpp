#include<iostream>
using namespace std;
int main(){
	int n=4,m=5,l=8;
		if(n>m&&n>l){
			cout<<n<<"greater";
		}
		else if(m>n&&m>l){
			cout<<m<<"greater";
		}
		else if(l>n&&l>m){
			cout<<l<<"greater";
		}
	return 0;
}
