#include <stdio.h>
#include <string.h>

struct data
{
char ID[10];
char DPT[10];
int SAL;

};



int main()
{
int n,i;

scanf("%d",&n);
struct data dat[n];





for(i=0;i<n;i++)
{
scanf("%s",dat[i].ID);
scanf("%s",dat[i].DPT);
scanf("%d",&dat[i].SAL);
}

for(i=0;i<n;i++)
{

if(dat[i].SAL>25000 && strcmp(dat[i].DPT,"SALES")==0)

printf("%s %s %d\n",dat[i].ID,dat[i].DPT,dat[i].SAL);

}
return 0;
}