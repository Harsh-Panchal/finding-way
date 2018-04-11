//#include<asd.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

void delay(unsigned int msecond)
{
    clock_t goal=msecond+clock();
    while(goal>clock());
}
#define a 75
#define b 5

int flag=1,st=-1;

//#include<random.h>
float random(int j)
{
	float z,m;
	z=(2^j)*j;
	m=sin(z);
	return m;
}

//#include<line.h>
void line()
{
	for(int e=0;e<a;e++)
	{
		cout<<"=";
	}
	cout<<endl;
}


void print(long int j,int i,int c,int x)
{
	float m;
	m=random(j);
	if(m>=-1.0 && m<-0.6 && i==1)
	{
		if(c==1 && j==x)
		{
			flag=1;
			st++;
			goto t;
		}
		cout<<" ";
		t:;
	}
	else if(m>=-0.6 && m<-0.2 && i==2)
	{
		if(c==2 && j==x)
		{
			flag=1;
			st++;
			goto y;
		}
		cout<<" ";
		y:;
	}
	else if(m>=-0.2 && m<0.2 && i==3)
	{
		if(c==3 && j==x)
		{
			flag=1;
			st++;
			goto u;
		}
		cout<<" ";
		u:;
	}
	else if(m>=0.2 && m<0.6 && i==4)
	{
		if(c==4 && j==x)
		{
			flag=1;
			st++;
			goto g;
		}
		cout<<" ";
		g:;
	}
	else if(m>=0.6 && m<=1.0 && i==5)
	{
		if(c==5 && j==x)
		{
			flag=1;
			st++;
			goto h;
		}
		cout<<" ";
		h:;
	}
	else
	{
		cout<<"|";
	}
}
int main()
{
    system("cls");
    int x,c,i,fg;
    int j;
    zx:
    st=0;x=0;c=2;
    cout<<"\n\n\n\n\n\n\n\t\t\t..........WELCOME IN GAME..........\n\n\n\t\t\t";
    cout<<"PRESS  ' P '  FOR GO UP     ...\n\t\t\tPRESS  ' Q '  FOR GO DOWN   ...\n\t\t\tPRESS  ' S '  FOR STOP GAME ...\n\t\t\tPRESS ANY KEY FOR CONTINUE  ...";
    while(!kbhit());
    system("cls");
    while(1)
    {
	line();
	flag=0;
	for(i=1;i<=5;i++)
	{
	    for(long int j=x;j<(x+a);j++)
	    {
		if(i==c && j==(x+b))
		{
			cout<<"*";
		}
		if(j%5==0)
		{
		    print(j,i,c,(x+b));
		}
		else
		{
			if(i==c && j==(x+b))
			{      }
			 else
			 {
				cout<<" ";
			 }

		}
	    }
	    cout<<endl;
	}
	line();
	if(flag==0 && (x+b)%5==0)
	{
		goto l;
	}
	x++;
	fg=x/25;
	delay(400-(fg*5));
	nex:
	if(kbhit())
	{
		switch(getch())
		{
			case 'p':
				c--;
				break;
			case 'q':
				c++;
				break;
			case 's':
				goto r;
				break;
			default:
				goto nex;
				break;
		}
	}
	system("cls");
    }
    r:
    while(!kbhit());
    goto nex;
    l:
    cout <<"\n\n\n\n\n\nYOU LOSE...!!!"<<endl<<endl;
    cout <<"your score:::"<<st<<endl;
    cout <<endl<<"do u want to restart :::" ;
    if(getch()=='y')
    {
	system("cls");
	goto zx;
    }
    return 0;
}
