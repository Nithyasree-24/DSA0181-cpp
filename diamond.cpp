#include<iostream>
using namespace std;
int main(){
	int i,j,r=4,k;
	for(i=0;i<r;i++){
		for(j=(r-i);j>0;j--){
			cout<<" ";
		}
		for(k=0;k<=i;k++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(i=1;i<r;i++){
		for(j=0;j<=i;j++){
			cout<<" ";
		}
		for(k=0;k<r-i;k++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}