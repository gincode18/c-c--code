#include<stdio.h>
int sort(int n,int a[100]);
int main(){
int n;
int a[100],b[100],c[100];
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    
    scanf("%d",&a[i]);

}
for (int i = 0; i < n; i++)
{
   
    scanf("%d",&b[i]);

}
sort(n,a);
sort(n,b);
for (int i = 0; i < n; i++)
{
    
    printf("%d",a[i]);

}
for (int i = 0; i < n; i++)
{
    
    printf("%d",b[i]);

}

for (int i = 0; i < n; i++)
{
    c[i]=a[i];
}
for (int i = n+1; i < 2*n; i++)
{
    c[i]=a[i];
}
for (int i = 0; i < 2*n; i++)
{
    printf("%d",c[i]);
}

return 0;
}
int sort(int n,int a[100]){
 int i, j, temp;
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(a[i]> a[j])
   {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
 
        
    return 0;
}