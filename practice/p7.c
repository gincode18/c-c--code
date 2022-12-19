#include<stdio.h>
/* code for matrix mutiplication*/
int main(){
int x,y,i,j,k,x1,y1;


scanf("%d",&x);

scanf("%d",&y);
scanf("%d",&x1);
scanf("%d",&y1);
int a[x][y];
int a1[x][y];
int a2[x][y];


  for(i=0; i<x; i++) {
      for(j=0;j<y;j++) {
        
         scanf("%d", &a[i][j]);
      }
   }
  

  for(i=0; i<x; i++) {
      for(j=0;j<y;j++) {
         
         scanf("%d", &a1[i][j]);
      }
   }
for(i=0; i<x; i++) {
      for(j=0;j<y;j++) {
a2[i][j]=0;
for ( k = 0; k < y; k++)
{
    a2[i][j]=a2[i][j]+a[i][k]*a1[k][j];
}

         
         
      }
   }
 //Displaying array elements
  
   for(i=0; i<x; i++) {
      for(j=0;j<y;j++) {
         printf("%d ", a2[i][j]);
       
      }
   }



    return 0;
}
