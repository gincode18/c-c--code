#include <iostream>
using namespace std;
int prime(int x){
for (int i = 2; i < x; i++)
{
  if (x%i==0)
  {
    return 0;
  }
  
}
return 1; 
}

int main() {
int n,y,counter=0;
cin>>n;
for (int i = 2; i < n; i++)
{
  y=prime(i);
  if (y==1)
  {
    counter++;

  }
  

}
cout<<counter;



  return 0;

}
