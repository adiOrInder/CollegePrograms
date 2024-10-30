#include<stdio.h>
int strln(char string[]){
   int len=0;
   for(int i=0;(string[i] != '\0');i++){
     len+=1;
  }
  return len;
}
void main(){
  char str[64];
  scanf("%[^\n]s",str);
  printf("%d",strln(str));
}
