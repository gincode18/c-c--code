#include <stdio.h>

void avg(int *a, int *b);
void diffrence(int *a, int *b);
int main()
{
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    printf("m = %d\n", m);
    printf("n = %d\n\n", n);

    avg(&m, &n);
    diffrence(&m, &n);    
    

   return 0;
}

void avg(int *a, int *b) 
{
    int temp;
    temp = (*a+*b)/2;
    printf("%d\n",temp);
}
void diffrence(int *a, int *b) 
{
    int temp;
    if (*a>=*b)
    {
       temp = *a-*b;
     printf("%d\n",temp);
    }
    else{
         temp = *b-*a;
     printf("%d\n",temp);
    }
   
    
}