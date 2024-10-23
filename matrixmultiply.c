#include<stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	int matrix1[n][n],matrix2[n][n];
	for(int i;i<n;i++){	
		for(int j;j<n;j++){
		printf("enter the element at %dx%d:\n ",i,j);
		scanf("%d",&matrix1[i][j]);
		}
	}

	for(int i;i<n;i++){
                for(int j;j<n;j++){
                printf("enter the element at %dx%d:\n ",i,j);
                scanf("%d",&matrix2[i][j]);
                }
        }
	int matrix3[n][n];
 for (int k =0;k<n;k++) {
      for (int l=0;l<n;l++) {
     matrix2[k][l]=matrix1[k][l]*matrix2[k][l];
          }
}
    for (int a=0;a<n;a++) {
        for (int b=0;b<n;b++) {
        printf("%d \n",matrix3[a][b]);
        }    
      printf("\n");
    }
  }
