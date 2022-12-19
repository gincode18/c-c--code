# include<iostream>
using namespace std;
class code
{
int id;
int jd;
public:
code(){ }
code(int a,int b)
{
id =a;
jd=b;
}

void display(void)
{
cout << id<<jd;
} };
int main()

{
code A(100,200); // object A is created and initialized
code B(A) ; // copy constructor called
code C = A; // copy constructor called again
code D;
// D is created f not initialized
D = A;
// copy constructor not called
cout <<"\n id of A: ";
A.display();
cout <<"\n id of B: ";
B.display();
cout <<"\n id of C: ";
C.display();
cout <<"\n id of D: ";
D.display();
return 0;
}