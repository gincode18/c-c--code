#include<stdio.h>
int main(){
int x;
scanf("%d",&x);
printf("enter %d elements\n",x);

int a[x];
for(int i=0;i<x;i++){
printf("element - %d:",i);
scanf("%d",&a[i]);
}
printf("Elements in array are:"); 
for (int  i = 0; i <x; i++)
{
   printf("%d ",a[i]);
}

return 0;




}
