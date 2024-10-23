#include<stdio.h>
#include<math.h>
void main(){
	int n,temp,j,rev=0,i=1;
	scanf("%d",&n);
	int ori=n;
	j=n;
	while(j>10){
		j/=10;
		i++;
	}
	printf("%d \n",i);
	i--;
	while(n>0){
		temp=n%10;
		rev=rev+temp*pow(10,i);
		i--;
			n/=10;

	}
	printf("%d",rev);
	if(rev==ori){
		printf("%d is palindrome",ori);
	}	
	else{
		printf("%d is not a palindrome",ori);
	}
}
