#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[]={1,3,2,2,2,1};
	int ne=sizeof(arr)/sizeof(arr[0]);
	int k=0;
	sort(arr,arr+n);
	for(int i=1;i<n;i++)
	if(arr[i]!=arr[k])
	arr[++k]=arr[i];
	cout<<"array after removing duplicates:";
	for(int i=0;i<=k;i++)
	cout<<arr[i]<<" ";
	return 0;
}
