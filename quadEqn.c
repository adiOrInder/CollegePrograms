#include<stdio.h>
#include<math.h>
void main(){
	printf("Assuming that Your Eqn. is in Form ax^2 + bx +c =0 \n");
	int a,b,c;
	float x;
	printf("Enter values of A,B,C:");
	scanf("%d %d %d",&a,&b,&c);
	x=sqrt(pow(b,2)-4*a*c);
	float r1,r2;
	r1 = (-b+x)/(2*a);
	r2 = (-b-x)/(2*a);
	printf("Value of Discreminant is %f \n",x);
	printf("Value of Roots are %f and %f \n",r1,r2);
	if(x>0){
		printf("Roots of this Quadratic Eqn. are Real \n");
	}
	if(x==0){
		printf("Roots of this Quadratic Eqn. are Real and Equal \n");
	}
	else{
		printf("Roots of this Quadratic Eqn. are Imaginary \n ");
	}
}
