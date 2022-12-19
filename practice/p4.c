#include<stdio.h>
int main(){
int x,i,j,k;
int temp;
scanf("%d",&x);
printf("enter %d elements\n",x);

int a[x],a2[x],a3[x];
for(int i=0;i<x;i++){
printf("element - %d:",i);
scanf("%d",&a[i]);
}

for (j = 0; j < x; j++)
{for ( k = j+1; k < x; k++)
{
    if (a[j]>a[k])
    {
        temp=a[j];
        a[j]=a[k];
        a[k]=temp;
    }
    
}

   
   
}

for ( i = 0; i < x; i++)
{
    printf("%d",a[i]);
}

    return 0;
}