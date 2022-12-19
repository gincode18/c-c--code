#include<stdio.h>
int main(){
int x,i,j,k;

scanf("%d",&x);
printf("enter %d elements\n",x);

int a[x];
for(int i=0;i<x;i++){
printf("element - %d:",i);
scanf("%d",&a[i]);
}
for (j = 0; j < x; j++)
{int flag=0;
   for (k= 0; k < x; k++)
   {
       if (a[j]==a[k])
       {
           flag=flag+1;
       }
    
   }
   printf("%d occours %d\n",a[j],flag);
}

    return 0;
}