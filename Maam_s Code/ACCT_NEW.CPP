#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
class account
{
 char name[20];
 long cno;
 public:
       void accept()
       {          cout<<"Enter name ";
		  cin>>name;
		  cout<<"Enter contact number ";
		  cin>>cno;
       }
       void displayA()
       {
	cout<<"\n\t name: "<<name;
	cout<<"\n\t contact no: "<<cno;
       }
};
class saving:public account
{
 int accno;
 float bal;
 public:
	void getsaving()
	{  cout<<"Enter savings acc. no. ";
	   cin>>accno;
	   cout<<"balance ";
	   cin>>bal ;
	}
	void displayS()
	{
	 displayA();
	 cout<<"\n\t account number: "<<accno;
	 cout<<"\n\t balance: "<<bal;
	 float amt=0.05*bal;
	 cout<<"\n\t amount after interest: "<<bal+amt;
	}
};
class current:public account
{
 int c_accno;
 float c_bal;
 public:
	void getcurrent()
	{
	   cout<<"Enter current acc. no. ";
	   cin>>c_accno;
	   cout<<"balance ";
	   cin>>c_bal;
	}
	void displayC()
	{
	 displayA();
	 cout<<"\n\t account number: "<<c_accno;
	 cout<<"\n\t balance: "<<c_bal;
	 float amt=0.015*c_bal;
	 cout<<"\n\t amount after interest: "<<c_bal+amt;
	}
};
int main()
{
 int n,n1;
 clrscr();
 
 cout<<"\n\t enter number of current accounts: ";
 cin>>n;
 current *c=new current[n];
 
 for(int i=0;i<n;i++)
 {
	c[i].accept();
	c[i].getcurrent();
	c[i].displayC();
  }

 cout<<"\n\t enter number of saving accounts: ";
 cin>>n1;
saving *s=new saving[n1];
 for( i=0;i<n1;i++)
 {
	s[i].accept();
	s[i].getsaving();
	s[i].displayS();

  }

 getch();
 return 0;
}