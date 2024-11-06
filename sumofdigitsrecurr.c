#include<stdio.h>
int sum(int arr[],int n){
	if (n<0){
		return 0;
	}
	else{
		return arr[n]+sum(arr,n-1);
	}
}
void main(){
	int a,temp=0,re=0;
	scanf("%d",&a);
	int arr[5];
	for(int i=0;i<5;i++){
		temp=a%10;
		a=a-temp;
		a/=10;
		arr[i]=temp;
		printf("%d \n",arr[i]);
	}
	printf("%d",sum(arr,4));
}
