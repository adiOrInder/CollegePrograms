#include<stdio.h>
int main(){
int r,c;
printf("enter no of rows ");
scanf("%d",&r);
printf("enter no of columns ");
scanf("%d",&c);
int matrix1[r][c],matrix2[c][r];
printf("enter the matrix \n");
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
	scanf("%d",&matrix1[i][j]);
	}
}
printf("transpose of the matrix is :\n");
for(int i=0;i<c;i++)
{
	for(int j=0;j<r;j++)
	{
	matrix2[i][j]=matrix1[j][i];
	printf("%3d",matrix2[i][j]);
	}
printf("\n");
}

}
