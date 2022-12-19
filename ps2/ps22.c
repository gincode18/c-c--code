#include <stdio.h>
int main()
{
    char str[100];
    char *p;

    printf("Enter any string: ");
    fgets(str, 100, stdin);

   
    p=str;

    printf("The input string is: ");
int i;
int x=0,y=0,z=0;
    for(i = 0; p[i] != '\0'; i++){

    }

    
 for(i = 0; p[i] != '\0'; i++){

if(p[i]=='a' || p[i]=='A' || p[i]=='e'|| p[i]=='E' || p[i]=='i'|| p[i]=='I' || p[i]=='o' || p[i]=='O' || p[i]=='u' || p[i]=='U')
{
    x=x+1;
}
else if (p[i]==' ')
{
    y=y+1;
}
else{
    z=z+1;
}



    }
printf("%d ",i-1-y);
printf("%d ",y+1);
printf("%d ",x);
printf("%d ",z-1); 
printf("%d ",y);
return 0;
} 