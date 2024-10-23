#include<stdio.h>
void main(){
	int temp =1;
	for(int i=0;i<=5;temp==1?temp--:temp++){
		for(int j=0;j<=i;j++){
			printf("%d",temp);
		}
		printf("\n");
		i++;
	}
}

