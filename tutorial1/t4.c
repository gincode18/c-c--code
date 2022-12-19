#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
char a[10000]; int c=0, f=0, temp, *n;
int input(){
    scanf("%s", a); int t;
    for(t=0; a[t]!='\0'; t++)
        a[t] = tolower(a[t]);
    return t;
}
void check()
{
    temp = input();
    n = (int*)malloc(sizeof(int)*temp); int b[temp];
    for(int j=0; j<temp; j++){ *(n+j)=0; b[j]=0; }
    for(int i=0; a[i]!='\0'; i++){
        if(b[i]) continue;
        for(int j=0; a[j]!='\0'; j++){
                if(a[i]==a[j]){ b[j]=1; *(n+c)+=1;; }
        } c++;
    }
}
void display()
{
    check();
    for(int i=0; i<c; i++)
        if(n[0]!=n[i])
		{ 
		printf("Non-Isogram"); f=1; 
		}
    if(!f){
        if(n[0]==1) 
		printf("First-Order Isogram");
        else if(*(n+0)==2) 
		printf("Second-Order Isogram");
    }
}
int main(){
    display();
    free(n);
    return 0;
}