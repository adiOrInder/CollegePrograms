#include<stdio.h>
#include<string.h>
int swap(int a,int b){
	int c=a;
	a=b;
	b=c;
	int stud[2];
	stud[0]=a;
	stud[1]=b;
	return stud;
}
void main(){
printf("enter two numbers");
int c,d;
scanf("%d %d",&c,&d);
int fin[2];
fin = swap;
printf("%d and %d becomes %d %d ",c,d,fin[0],fin[1]);
}
