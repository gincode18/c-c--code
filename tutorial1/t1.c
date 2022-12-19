#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
if (n>=95 && n<=105)
{
    printf("Water");
}
else if (n>=357-357*0.05 && n<=357+357*0.05)
{
    printf("Mercury");
}
else if (n>=1187-1187*0.05 && n<=1187+1187*0.05)
{
    printf("Copper");
}
else if (n>=2193-2193*0.05 && n<=2193+2193*0.05)
{
    printf("Silver");
}
else if (n>=2660-2660*0.05 && n<=2660+2660*0.05)
{
    printf("Gold");
}
else{
    printf("Substance unknown");
}
return 0;
}