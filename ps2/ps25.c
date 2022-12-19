#include <stdio.h>
#include <stdlib.h>
struct person 
{
    int con;
    float unit;
    char name[50];
    char t[1];
};

int main()
{
    struct person *ptr;
    int i, n;
    scanf("%d", &n);
    ptr = (struct person*) malloc(n * sizeof(struct person));
    for(i = 0; i < n; ++i)
    {
        scanf("%d %s %s %f",&(ptr+i)->con, (ptr+i)->name,(ptr+i)->t, &(ptr+i)->unit);
    }
    for(i = 0; i < n; ++i)
    {

        if((ptr+i)->t[0]=='C' && (ptr+i)->unit>=700)
        {
            printf("%s\t", (ptr+i)->name);
        }
    }   
    return 0;
}