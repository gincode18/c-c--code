#include<stdio.h>
int main(){
int x;
float sum=0;
printf("Input the number of elements to store in the array:");
scanf("%d",&x);
printf("enter %d elements\n",x);

int a[x];
for(int i=0;i<x;i++){
printf("element - %d:",i);
scanf("%d",&a[i]);
}
for (int j = 0; j < x; ++j) {
sum =sum+a[j];
  }
printf("Avg of all elements stored in the array is :%f",sum/x);
return 0;




}
