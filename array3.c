#include<stdio.h>
int main(){
int r,c;
printf("enter no of columns ");
scanf("%d",&c);
printf("enter no of rows ");
scanf("%d",&r);
int matrix1[r][c],matrix2[r][c],sum[r][c];
printf("enter the matrix1 \n");
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
	scanf("%d",&matrix1[i][j]);
	}
}
printf("enter the matrix2\n");
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
	scanf("%d",&matrix2[i][j]);
	}
}
printf("sum of matrices is: \n");
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
	sum[i][j]=matrix1[i][j]+matrix2[i][j];
	printf("%d  ",sum[i][j]);
	}
	printf("\n");	
}
}
