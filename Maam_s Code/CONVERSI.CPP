
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class conversion
{
 public:
       virtual void display()=0;
};
class weight:public conversion
{
 float g,kg;
 public:
	void convert()
	{
	 cout<<"\n\t enter weight in grams: ";
	 cin>>g;
	 kg=g/1000;
	}
	void display()
	{
	 cout<<"\n\t weight in kilogram is: "<<kg<<" kg";
	}
};
class volume:public conversion
{
 float ml,l;
 public:
	void convert()
	{
	 cout<<"\n\t enter volume in mililiters: ";
	 cin>>ml;
	 l=ml/1000;
	}
	void display()
	{
	 cout<<"\n\t volume in liters is: "<<l<<" li";
	}
};
class currency:public conversion
{
 float rs,ps;
 public:
	void convert()
	{
	 cout<<"\n\t enter currency in paise: ";
	 cin>>ps;
	 rs=ps/100;
	}
	void display()
	{
	 cout<<"\n\t currency in rupees is: "<<rs<<" rs";
	}
};
int main()
{
 clrscr();
 int ch;
 conversion *ptr;
 weight objw;
 volume objv;
 currency objc;
 do
 {
  cout<<"\n\t 1.convert weight";
  cout<<"\n\t 2.convert volume";
  cout<<"\n\t 3.convert currency";
  cout<<"\n\t 4.exit";
  cout<<"\n\t enter your choice: ";
  cin>>ch;
  switch(ch)
  {
   case 1:
	  objw.convert();
	  ptr=&objw;
	  ptr->display();
	  break;
   case 2:
	  objv.convert();
	  ptr=&objv;
	  ptr->display();
	  break;
   case 3:
	  objc.convert();
	  ptr=&objc;
	  ptr->display();
	  break;
   case 4:
	  exit(0);
   default:
	  cout<<"\n\t invalid choice";
  }
 }while(ch!=4);
 getch();
 return 0;
}


