#include<stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	int la=n%10;
	int temp=n,i=0;
	while(temp>10){
		temp/=10;
		i++;
	
	}
	printf("first digit of a number is:%d \n",temp);
	printf("last digit of a number is:%d \n",la);
	}
