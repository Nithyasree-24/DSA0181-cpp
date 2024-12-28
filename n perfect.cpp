#include<stdio.h>
int isperfect(int n){
	int sum=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	return(sum==n);
}
int main(){
	int start,end;
	printf("enter therange(start and end):\n");
	scanf("%d%d",&start,&end);
	for(int i=start;i<=end;i++){
		if(isperfect(i)){
			printf("%d\n",i);
		}
	}
	return 0;
}
