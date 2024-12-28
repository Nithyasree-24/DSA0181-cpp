#include<iostream>
using namespace std;
int main(){
	int i,j,r=4;
	for(i=0;i<r;i++){
		for(j=(r-i);j>=0;j--){
			cout<<" ";
		}
		for(j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
