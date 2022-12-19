#include<iostream>
using namespace std;
class staff{
public:
string name;
string code;
virtual void input(){
	cin>>name>>code;
}

};
class teacher:public staff{
public:
string subject;
int pub;
void input(){
	cin>>subject>>pub;
}


};
class officer:public staff
{public:
int grade;
void input(){
	cin>>grade;
}

};
class typist:public staff{public:
string speed;

};
class regular:public typist{public:
void input(){

	cin>>speed;
}
};
class temporary:public typist{
public:
int dailywage;
void input(){
	cin>>speed>>dailywage;
}
};
int main(){int x;
	cin>>x;
int c1=0,c2=0,c3=0,c4=0;
staff ob1[x];
teacher ob2[x];
officer ob3[x];
regular ob4[x];
temporary ob5[x];


for (int i = 0; i < x; i++)
{
	ob1[i].input();
	
}
for (int i = 0; i < x; i++)
{
	if (ob1[i].code[0]=='1')
	{
		ob2[c1].input();
		if (ob2[c1].pub>3)
		{
			cout<<ob1[i].name<<endl;
		}

		c1++;
		
	}
	else if (ob1[i].code[0]=='3')
	{
		ob3[c2].input();
		if (ob3[c2].grade==2)
		{
			cout<<ob1[i].name<<endl;
		}
		c2++;
	}
	else if (ob1[i].code[0]=='2')
	{
		if (ob1[i].code[1]=='0')
		{
			ob4[c3++].input();
		}
		else if (ob1[i].code[1]=='1')
		{ 
			ob5[c4].input();
			if (ob5[c4].dailywage>550)
			{
				cout<<ob1[i].name<<endl;
			}
			c4++;
			
			
		}
		
		
	}
}







	return 0;
}
