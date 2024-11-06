#include<stdio.h>
#include<string.h>
int pali(char stri[]){
	int temp=0;
	for(int i=0;i<=strlen(stri);i++){
		if(strlen(stri)%2==0){
			if(stri[i]==stri[strlen(stri)-i]){
					}
			else{
				temp++;
				}
				return temp;
				}
		else{	
			if(stri[i]==stri[strlen(stri)-i]){
                                        }
                        else{
                                temp++;
                                }
                                return temp;
		}}
                                }

void main(){
char str[5]={'a','b','c','b','a'};
if(pali(str)>0){
	printf("%ld",sizeof(int));	
}
else{
	printf("not pali");
	}

}

