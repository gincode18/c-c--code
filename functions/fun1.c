#include<stdio.h>
int main(){
int x,i,m;
scanf("%d",&x);
for(i=1;i<=x;i++){
for (int j = 1; j <=x-i; j++)
{
    printf(" ");
}
m=1;
for (int k = 1; k <=i; k++)
{
   printf("%d",m++);
}
m=m-2;
for (int l = 1; l < i; l++)
{
    printf("%d",m--);
}
printf("\n");


}

return 0;




}
