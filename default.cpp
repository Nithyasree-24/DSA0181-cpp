#include<iostream>
using namespace std;
int main(){
	int arr[]={10,25,15,30};
	int n=4;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	cout<<sum;
	return 0;
	}
