#include<stdio.h>
void main(){
  int lar,sma,n;
  int i=0,j=1;
  printf("enter the number of numbers :");
  scanf("%d",&n);
  int num[n];
  while(i<n){
    scanf("%d",&num[i]);
    i++;
  }
  sma=num[1];
  lar=num[2];
  while(j<n){
    if(lar<num[i]){
      lar=num[i];
    }
    if(sma>num[i]){
      sma=num[i];
    }
    j++;
    }
    printf("%d , %d",sma,lar);
  
}
