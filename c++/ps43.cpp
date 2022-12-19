#include <bits/stdc++.h>
using namespace std;

class info{
        
    int x;
    int y;
    int z;
public:
info(int a, int b,int c){
x=a;y=b;z=c;

}
friend void display(info i);
friend void operator - (info &a);
};

void display(info i){
    cout << i.x;
}

void operator - (info &a){
a.x=-a.x;
a.y=-a.y;
a.z=-a.z;
}

int main(){
info a(1,2,3);
a.display();
-a;
a.display();    
    return 0;
}