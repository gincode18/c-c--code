#include<stdio.h>
int main(){
int n;
int BCB=0,BCE=0,BCI=0,BCT=0,BDS=0,BKT=0;
char a[10];
char c[10];
char s[10];
scanf("%d",&n);
for ( int i = 0; i < n; i++)
{
    scanf("%s",a);

   if (a[3]=='C' && a[4]=='B')
   {
       BCB+=1;
   }
   else if (a[3]=='C' && a[4]=='E')
   {
       BCE+=1;
   }
   else if (a[3]=='C' && a[4]=='I')
   {
       BCI+=1;
   }
   else if (a[3]=='C' && a[4]=='T')
   {
       BCT+=1;
   }
   else if (a[3]=='D' && a[4]=='S')
   {
       BDS+=1;
   }
   else if (a[3]=='K' && a[4]=='T')
   {
       BKT+=1;
   }
   
   
}
printf("BCB : %d\nBCE : %d\nBCI : %d\nBCT : %d\nBDS : %d\nBKT : %d",BCB,BCE,BCI,BCT,BDS,BKT);


return 0;
}