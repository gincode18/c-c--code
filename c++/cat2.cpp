#include <iostream>
using namespace std;



int main() {
int t,a,b,c,d;
cin>>t;
for (int i = 0; i < t; i++)
{
    cin>>a>>b>>c>>d;
    if (a>b)
    {
        a=a+c;
    }
    else if(a==b){

    a=a+c;
    }
    else if (b>a)
    {
        b=b+c;
    }
    if (a>b)
    {
        b=b+d;
    }
    else if(a==b){

    b=b+d;
    }
    else if (b>a)
    {
        a=a+d;
    }
    
    if (a>b)
    {
        cout<<"N"<<endl;
    }
    else if(b>a){
       cout<<"S"<<endl; 
    }
    
    
}






return 0;
}
