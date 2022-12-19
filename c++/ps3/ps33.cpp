#include <bits/stdc++.h>
using namespace std;
class Staff{
	public:
	string name, code;
	virtual void set_deets(){
		cin>>name>>code;
		}

};
class Education: public Staff{
	public:
	string info;
	virtual void set_info()=0;
};
class Teacher: public Education{
	public:
	string sub;	int total_pub;
	void set_deets(){ cin>>sub>>total_pub; }
	void set_info(){ cin>>info;	}
	void get_UG(Staff o){
		if(info=="UG") cout<<o.name<<" ";
	}
	void get_PG(Staff o){
		if(info=="PG") cout<<o.name<<" ";
	}
};
class Officer: public Education{
	public:
	int grade;
	void set_deets(){ scanf("%d", &grade); }
	void set_info(){ cin>>info;	}
	void get_PG(Staff o){
		if(info=="PG") cout<<o.name<<" ";
	}
};
class Typist: public Staff{
	public:
	string temp_speed; int speed;
};
class Regular: public Typist{
	public:
	char speed[99];
	void set_deets(){ scanf("%s", speed); }
};
class Temporary: public Typist{
	public:
	int daily_wages;
	char speed[99];
	void set_deets(){ scanf("%s%d", speed, &daily_wages); }
	void get_deets(Staff o){
		if(daily_wages>550) cout<<o.name<<"\n";
	}
};
int main(){
	int n; scanf("%d",&n);
	Staff o1[n];
	Teacher o2[n]; int c2=0;
	Officer o3[n]; int c3=0;
	Regular o4[n]; int c4=0;
	Temporary o5[n]; int c5=0;
	for(int i=0; i<n; i++)
		o1[i].set_deets();
	for(int i=0; i<n; i++){
		switch(o1[i].code[0]){
			case '1':
			o2[c2++].set_info();
			break;
			case '3':
			o3[c3++].set_info();
			break;
			default: continue;
		}
	} c2=0; c3=0; c4=0; c5=0;
	for(int i=0; i<n; i++){
		switch(o1[i].code[0]){
			case '1':
			o2[c2++].set_deets();
			break;
			case '2':
			if(o1[i].code[1]=='0'){
				o4[c4++].set_deets();	
			}			
			else if(o1[i].code[1]=='1'){
				o5[c5++].set_deets();
				break;
			}
			case '3':
			o3[c3++].set_deets();
			break;
			default: continue;
		}
	} c2=0; c3=0; c4=0; c5=0;
	
	for(int i=0; i<n; i++)
		if(o1[i].code[0]=='1')
			o2[c2++].get_UG(o1[i]);
	c2=0; cout<<"\n";
	for(int i=0; i<n; i++)
		if(o1[i].code[0]=='1')
			o2[c2++].get_PG(o1[i]);
	cout<<"\n";
	for(int i=0; i<n; i++)
		if(o1[i].code[0]=='3')
			o3[c3++].get_PG(o1[i]);
	return 0;
}