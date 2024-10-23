#include<stdio.h>
void main(){
	int n,temp,j,rev=0,i=1;
        scanf("%d",&n);
        j=n;
        while(j>10){
                j/=10;
                i++;
        }
        printf("%d \n",i);
        while(n>0){
                temp=n%10;
                rev=rev+temp;
                        n/=10;

        }
        printf("%d",rev);
}
