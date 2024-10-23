#include<stdio.h>
int main(){
int r,c;
printf("enter no of columns/rows ");
scanf("%d",&c);
r=c;
int matrix1[r][c],matrix2[r][c],product[r][c];
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
printf("multiplication of matrices is: \n");
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
	product[i][j]=0;
		for(int k=0;k<r;k++)
		{
		product[i][j]+=matrix1[i][k]*matrix2[k][j];
		}
	printf("%3d",product[i][j]);
	}
printf("\n");	
}
}
