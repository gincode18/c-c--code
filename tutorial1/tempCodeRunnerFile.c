#include<stdio.h>
#include<string.h>



int  main(){
char s[100];
char c[100];

scanf("%s",c);
int x=strlen(c);


int a[x];
c[0]+=32;


int first=0,second=0;
for (int i = 0; i < x; i++)
{int flag =0;
    for (int j = 0; j < x; j++)
    {
        if (c[i]==c[j])
        {
            flag=flag+1;
        }
        
    }
    a[i]=flag;
}



for (int i = 0; i < x; i++)
{if (a[i]==1)
{
    first+=1;
}
else if (a[i]==2)
{
    second+=1;
}


    
}
if (first==x)
{
    printf("First-Order Isogram");
}
else if (second==x)
{
    printf("Second-Order Isogram");
}

else{
    printf("Non-Isogram");
}


    return 0;
}