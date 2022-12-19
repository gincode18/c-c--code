#include<stdio.h>
/* code for matrix addition*/
int main(){
int x,y,i,j,k;

printf("rows\n");
scanf("%d",&x);
printf("col\n");
scanf("%d",&y);
int a[x][y];
int a1[x][y];
int a2[x][y];
int sum=0;
printf("enter  elements for matrix 1\n");
  for(i=0; i<x; i++) {
      for(j=0;j<y;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &a[i][j]);
      }
   }
  
printf("enter  elements for matrix 2\n");
  for(i=0; i<x; i++) {
      for(j=0;j<y;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &a1[i][j]);
      }
   }
for(i=0; i<x; i++) {
      for(j=0;j<y;j++) {
a2[i][j]=a[i][j]+a1[i][j];
         
         
      }
   }
 //Displaying array elements
   printf("sum of matrix:\n");
   for(i=0; i<x; i++) {
      for(j=0;j<y;j++) {
         printf("%d ", a2[i][j]);
         if(j==y-1){
            printf("\n");
         }
      }
   }



    return 0;
}
