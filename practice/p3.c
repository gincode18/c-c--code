#include<stdio.h>
int main(){
int x,i,j,k;

scanf("%d",&x);
printf("enter %d elements\n",x);

int a[x],a2[x],a3[x];
for(int i=0;i<x;i++){
printf("element - %d:",i);
scanf("%d",&a[i]);
}
int odd=0;
int even=0;
for (j = 0; j < x; j++)
{
   if (a[j]%2==0)
   { a2[even]=a[j];
       even=even+1;
   }
   else
   {a3[odd]=a[j];
       odd=odd+1;
   }
   
}
for ( k = 0; k <even; k++)
{
    printf("even no=%d\n",a2[k]);
}
for ( k = 0; k <odd; k++)
{
    printf("odd no=%d\n",a3[k]);
}

    return 0;
}