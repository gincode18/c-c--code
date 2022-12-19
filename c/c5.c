#include<stdio.h>  
int main()    
{    
int n,r,sum=0,sum2=0,temp;    
    
scanf("%d",&n);
while(n>0)
{

r=n%10;
if(r%2==0){
sum=sum+r;
n=n/10;
}
else{

n=n/10;
sum2=sum2+r;
}

}    
printf("%d,%d",sum,sum2);
return 0;  
}   