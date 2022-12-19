#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

char c[50];
char *ptr=c;


scanf("%s",ptr);
int counter=0;
for (int i = 0; i < strlen(c); i++)
{if (*(ptr+i)=='a'|| *(ptr+i)=='e'||*(ptr+i)=='i'||*(ptr+i)=='o'||*(ptr+i)=='u')
{counter++;
 
}


}
printf("%d",counter);


return 0;




}
