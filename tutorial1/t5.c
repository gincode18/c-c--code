#include<stdio.h>
void read_input();
void Calculate_fare();
void display_output();
int fare=0,d;
char c;
int main()
{
    
    read_input();
    Calculate_fare();
    display_output();
}

void read_input()
{
    
    scanf("%c%d",&c,&d);
}

void Calculate_fare()
{
    
    if(c=='P'||c=='p')
    {
        if(d>=1 && d<=30)
        fare=d*12;
        else if(d>=31 && d<=100)
        fare=(30*12)+(d-30)*11;
        else
        fare=30*12+(70*11)+(d-100)*10;
        fare+=70;
    }
    
    else if(c=='D'||c=='d')
    {
        if(d>=1 && d<=30)
        fare=d*11;
        else if(d>=31 && d<=100)
        fare=(30*11)+(d-30)*10;
        else
        fare=30*11+(70*10)+(d-100)*9;
        fare+=70;
    }
    
    else
    {
        if(d>=1 && d<=20)
        fare=d*14;
        else if(d>=21 && d<=100)
        fare=(20*14)+(d-20)*11;
        else if(d>=101 && d<=500)
        fare=20*14+(80*11)+(d-100)*8;
        else
        fare=20*14+(80*11)+200*8+(d-500)*6;
        fare+=40;
    }
    
}

void display_output()
{
    printf("%d",fare);
}