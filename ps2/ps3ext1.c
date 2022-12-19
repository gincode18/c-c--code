#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int t,average,sum=0;
    int* ptr;
    ptr = (int*)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; ++i) {
        scanf("%d",&t);
        sum+=t;
        ptr[i] = t;
        }
    average=sum/(float)10;
    printf("avg temp%d",average);
    return 0;
}