#include<stdio.h>
int main(){
int r,c;
printf("enter no of columns ");
scanf("%d",&c);
printf("enter no of rows ");
scanf("%d",&r);
int matrix[r][c];
printf("enter the matrix \n");
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
	scanf("%d",&matrix[i][j]);
	}
}
printf("your matrix is :\n");
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
	printf("%d",matrix[i][j]);
	}
	printf("\n");
}
}
