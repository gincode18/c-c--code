#include<iostream>
using namespace std;
class student{public:
string name;
int marks[5];
char grade;
void readgrade(){
cin>>grade;
}
};
class percentage:public student{
public:
void calc(){

cin>>name;
for(int j=0;j<5;j++){
cin>>marks[j];
}}
};
class Grade:public percentage{
public:
void get(){
cin>>grade;
}
};
class report:public Grade
{public:

void result(){
int sum=0;
for(int i=0;i<5;i++){
sum=sum+marks[i];
}
cout<<sum<<"%";
}
};
int main(){
int x;
cin>>x;
report a[x];
for(int i=0;i<x;i++){
a[i].calc();
a[i].get();
}
for(int i=0;i<x;i++){
cout<<a[i].name;
for(int j=0;j<5;j++){
cout<<a[i].marks[j];
}
a[i].result();

}
return 0;
}