#include<stdio.h>
void main(){
	int n,sum=0,i=0;
	scanf("%d",&n);
	do{
		sum=sum+i;
		i++;
	}while(n>=i);
	printf("sum of %d number is %d",n,sum);
}

