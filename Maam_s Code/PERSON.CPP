//class person 
#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

class person
{
 char name[20];
 char city[15];
 long mobno;
 public:
 void getdata()
 {
  cout<<"person name ";
  cin>>name;
  cout<<"city ";
  cin>>city;
  cout<<"mobile no ";
  cin>>mobno;
}

 void display()
 {
  cout<<"\nperson name"<<name;
  cout<<"\n city"<<city;
  cout<<"\n mobile number"<<mobno;
 }
 void search(char n[])
 {
  if (strcmp(name,n)==0)
  {
  cout<<"\nperson name"<<name;
  cout<<"\nperson mobile number"<<mobno;
  cout<<"\nperson city"<<city;
  }
 }
 void search(long mobileno)
 {
   if(mobno==mobileno)
   {
	 cout<<"\n person name"<<name;
	 cout<<"\n person city"<<city;
	 cout<<"\n person mobile number"<<mobno;
   }
 }
};
void main()
{

 int n;
 long mbno;
 char nam[20];
 int ch;
 person *p;
 clrscr();
 cout<<"\n enter how many records to be entered:";
 cin>>n;
 p=new person[n];

 while(1)
 {
  cout<<"\n1.enter records\n2.display\n3.search mobile no\n4.search name by mobno\n5.exit";
  cout<<"\nenter your choice";
  cin>>ch;
  switch(ch)
  {
   case 1:
	  for(int i=0;i<n;i++)
	{
	 p[i].getdata();
	}
	break;
   case 2:
	  for(i=0;i<n;i++)
	{
	 p[i].display();
	}
	break;
   case 3:
	 cout<<"person name ";
	 cin>>nam;
	 for(i=0;i<n;i++)
	 {
	  p[i].search(nam);
	 }
	 break;
   case 4:
	cout<<"enter mob no of person to be searched ";
	cin>>mbno;
	for(i=0;i<n;i++)
	{
	 p[i].search(mbno);
	}
	break;
  case 5:
	exit (0);
  }
 }

 getch();
}

