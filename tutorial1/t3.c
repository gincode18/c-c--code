#include<stdio.h>
int main(){
int pa[10],ma[10],gr[10];
for ( int i = 0; i < 3; i++)
{
   for (int j = 0; j <4; j++)
   {if (i==0)
   {
       scanf("%d",&pa[j]);
   }
   else if (i==1)
   {
       scanf("%d",&ma[j]);
   }
    else
   {
       scanf("%d",&gr[j]);
   }
       
   }

}
for ( int i = 0; i < 3; i++)
{int sum=0;
   for (int j = 0; j <4; j++)
   {if (i==0)
   {
       sum=sum+pa[j]*100;
   }
   else if (i==1)
   {
       sum=sum+ma[j]*150;
   }
    else
   {
       sum=sum+gr[j]*50;
   }
       
   }
printf("%d ",sum);
}

printf("\n");
printf("%d ",pa[0]*100+ma[0]*150+gr[0]*50);
printf("%d ",pa[1]*100+ma[1]*150+gr[1]*50);
printf("%d ",pa[2]*100+ma[2]*150+gr[2]*50);
printf("%d \n",pa[3]*100+ma[3]*150+gr[3]*50);
printf("%d",pa[0]*100+ma[0]*150+gr[0]*50+pa[1]*100+ma[1]*150+gr[1]*50+pa[2]*100+ma[2]*150+gr[2]*50+pa[3]*100+ma[3]*150+gr[3]*50);
    return 0;
}