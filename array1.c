#include<stdio.h>
int main()
{
int n;
printf("enter no of terms ");
scanf("%d",&n);
int arr[n];
printf("enter the numbers ");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
 for(int j=0;j<n;j++)
    if (arr[j]>arr[j+1]) 
    {
     int temp=arr[j];
     arr[j]=arr[j+1];
      arr[j+1]=temp;
    }

}
printf("smallest number is %d \n",arr[0]);
printf("largest number is: %d",arr[n-1]);
}
