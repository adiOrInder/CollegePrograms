#include<stdio.h>
void main(){
	int row=5;
	for(int i=0;i<row;i++){
		for(int j=1;j<row-i;j++){
			printf("@ ");
		}
		for(int k=i+1;k>0;k--){
			printf("%d ",k);
		}
		printf("\n");
	}
}
