#include<stdio.h>
#include<string.h>
int main(){
char c[100];
char *ptr;
char c2[100];
char *ptr2;
scanf("%s",c);
ptr=c;
ptr2=c2;
int i=0,n,new;
char newc;
n=strlen(c);
int x=0,count=0;
for(i=n;i>=0;i--){
		*(ptr2+x)=*(ptr+i-1);
        x++;
        }


int result;
result=strcmp(ptr,ptr2);
if (result==0)
{
 printf("palindrome");
}
else{
    printf("not palindrome\n");
    printf("Enter the position for replacement : \n");
    scanf("%d",&new);
    printf("Enter the replacing character : \n");
    scanf(" %c",&newc);
    
    *(ptr+new-1)=newc;
x=0;
for(i=n;i>=0;i--){
		*(ptr2+x)=*(ptr+i-1);
        x++;
            }   result=strcmp(ptr,ptr2);
if (result==0)
{printf("%s ",c);
 printf("is palindrome");
}
else{
    printf("not palindrome\n");}


}






    return 0;
}