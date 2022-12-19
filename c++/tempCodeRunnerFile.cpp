#include <iostream>
using namespace std;



int main() {
int t,n;
cin>>t;



for (int i = 0; i < t; i++)
{cin>>n;
int a1[n],a2[n];
    for (int j = 0; j < n; j++)
    {
        cin>>a1[j];
    }
    for (int j = 0; j < n; j++)
    {
        cin>>a2[j];
    }
    int counter=0;
   
    
    for (int j = 0; j < n; j++)
    {if (a2[j]<=a1[j+1]-a1[j])
    {
       counter++;
       
    }
    }
    cout<<counter<<endl;
}
return 0;
}
