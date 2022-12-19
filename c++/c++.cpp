#include<iostream>
#include<string.h>
using namespace std;
class x{
public:
int regno;
int vendprice;
string adress;
int print(){
cout<<regno<<endl<<adress;


    return 0;
}


};
int main(){
int n;
cin>>n;
x a[n];

for (int i = 0; i < n; i++)
{
    cin>>a[i].regno;
 cin>>a[i].adress;
    cin>>a[i].vendprice;
}
int min;
min=a[0].vendprice;
for (int i = 0; i < n; i++)
{
    if (a[i].vendprice<min)
    {
       min=a[i].vendprice;
    }
    
}
for (int i = 0; i < n; i++)
{
    if (min==a[i].vendprice)
    {
        a[i].print();
    }
    
}




return 0;
}