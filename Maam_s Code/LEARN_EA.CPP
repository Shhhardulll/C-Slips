
#include<iostream.h>
#include<conio.h>
#include<string.h>
class learning_info//Parent 1st
{
protected:
  int rollno;
  char stud_name[20];
  char clas[15];
  float percen;
public:
  learning_info(int r,char n[],char cl[],float p)
   {
	 rollno=r;
	 strcpy(stud_name,n);
	 strcpy(clas,cl);
	 percen=p;
   }
   void displaylearning()
   {
	 cout<<rollno<<endl;
	 cout<<stud_name<<endl;
	 cout<<clas<<endl;
	 cout<<percen<<endl;
   }
};
class earning_info //Parent 2nd
{
 protected:
  int hrs;
  float charges;
public:
  earning_info(int h,float f)

   {
	 hrs=h;
	 charges=f;
   }
   void displayearning()
   {
	 cout<<hrs<<endl;
	 cout<<charges<<endl;
	 cout<<"Total money earned "<<hrs*charges;
   }
};
class earn_learn_info:public earning_info,public learning_info
{
public:
  earn_learn_info(int rno,char nam[],char cls[],float pr,int h,float chrg):
  learning_info(rno,nam,cls,pr),earning_info(h,chrg)
  {  }
  void display()
  {
	displaylearning();
	 displayearning();
  }
};

  void main()
  {
     earn_learn_info p(1,"xx","fy",60.85,30,100);
     clrscr();
     p.display();
  }
