#include<stdio.h>
int main(){
int r,c;
printf("enter no of rows/columns ");
scanf("%d",&r);
c=r;
int matrix1[r][c];
printf("enter the matrix \n");
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
	scanf("%d",&matrix1[i][j]);
	}
}
printf("new matrix is :\n");
for(int i=0;i<r;i++)
{
	for(int j=c-1;j>=0;j--)
	{
	if(i==j)
	{
	int temp=matrix1[i][j];
	matrix1[i][j]=matrix1[i][r-1-j];
	matrix1[i][r-1-i]=temp;
	/*if(i==j&&j>=i)
	{
	int temp=matrix1[i][j];
	matrix1[i][j]=matrix1[i][r-1-i];
	matrix1[i][r-1-i]=temp;*/
	}
	
	printf("%3d",matrix1[i][j]);
	}
	printf("\n");
}

}
