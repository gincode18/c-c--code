#include<stdio.h>
int main(){
int x,count=0;
printf("Input the number of elements to store in the array:");
scanf("%d",&x);
printf("enter %d elements\n",x);

int a[x];
for(int i=0;i<x;i++){
printf("element - %d:",i);
scanf("%d",&a[i]);
}
for (int j = 0; j < x; ++j) {
for (int i = j+1; i < x; i++)
{
    if (a[j]==a[i])
    {
     count=count+1;
    }
    
}


}
printf("Total number of duplicate elements found in the array is :%d",count);
return 0;




}

