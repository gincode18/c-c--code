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
int x1=0,x2=0,x3=0,x4=0;
staff a1[x];
teacher a2[x];
officer a3[x];
regular a4[x];
temporary a5[x];


for (int i = 0; i < x; i++)
{
	a1[i].input();
	
}
for (int i = 0; i < x; i++)
{
	if (a1[i].code[0]=='1')
	{
		a2[x1].input();
		if (a2[x1].pub>3)
		{
			cout<<a1[i].name<<endl;
		}

		x1++;
		
	}
	else if (a1[i].code[0]=='3')
	{
		a3[x2].input();
		if (a3[x2].grade==2)
		{
			cout<<a1[i].name<<endl;
		}
		x2++;
	}
	else if (a1[i].code[0]=='2')
	{
		if (a1[i].code[1]=='0')
		{
			a4[x3++].input();
		}
		else if (a1[i].code[1]=='1')
		{ 
			a5[x4].input();
			if (a5[x4].dailywage>550)
			{
				cout<<a1[i].name<<endl;
			}
			x4++;
			
			
		}
		
		
	}
}







	return 0;
}
