#include<stdio.h>
int sum(int mat1[][],int mat2[][],int n){
	if(n<0){
		return 0;
	}
	else
	{
	return mat1[i][n]*mat2[n][j]+sum(int mat1[][],int mat2[][],n-1);	
	}
void main(){
	int matrix1 ={{1,2},{2,3}};
	int matrix2 ={{3,4},{2,4}};
	int matrix3[2][2];
	for(int=0;i<3;i++){
		for(intj=0;i<3;j++){
			matrix3[i][j]=sum(int mat1[][],int mat2[][],2);
		}
	}
}
