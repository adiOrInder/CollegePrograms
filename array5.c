#include<stdio.h>
int main(){
int r,c;
printf("enter no of columns/rows ");
scanf("%d",&c);
r=c;
int matrix1[r][c],sum=0;
printf("enter the matrix \n");
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
	scanf("%d",&matrix1[i][j]);
	}
}
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
	if(i==j)  sum+=matrix1[i][j];
	}
}
printf("%d",sum);
}
