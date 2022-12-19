#include<stdio.h>
int main(){
int x;
printf("Input the number of elements to store in the array:");
scanf("%d",&x);
printf("enter %d elements\n",x);

int a[x];
for(int i=0;i<x;i++){
printf("element - %d:",i);
scanf("%d",&a[i]);
}
printf("The values store into the array are :"); 
for (int  i = 0; i <x; i++)
{
   printf("%d ",a[i]);
}
printf("The values store into the array in reverse are :");
for (int  i = x-1; i >=0; i--)
{
   printf("%d ",a[i]);
}

return 0;




}
