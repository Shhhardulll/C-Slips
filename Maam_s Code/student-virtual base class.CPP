/*Create a base class Student(Roll_No, Name)  which derives two classes 
Academic_Marks(Mark1, Mark2, Mark3)  and Extra_Activities_Marks(Marks).
Class Result(Total_Marks, Grade) inherits both Academic_Marks and Extra_Activities_Marks classes. 
(Use Virtual Base Class)
Write a C++ menu driven program to perform the following  functions:
i.Build a master table
ii.Calculate Total_marks and grade */	

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class student
{
  protected:
    int roll_no;
    char name[20];
  public:
    void get_number()
    {
       cout<<"enter roll_no ";
       cin>>roll_no;
       cout<<"enter name ";
       cin>>name;
    }
    void put_number()
    {
     cout<<"Roll_no: "<<roll_no<<"\n";
    cout<<"Name: "<<name<<"\n";
    }
};
class Academic_marks:virtual  public student
{
  protected:
	float mark1,mark2,mark3;
  public:
   void get_marks()
   {
	 cout<<"enter mark1 ";
	 cin>>mark1;
	 cout<<"enter mark2 ";
	 cin>>mark2;
	 cout<<"enter mark3 ";
	 cin>>mark3;
   }
  void put_marks()
  {
  cout<<"mark1 = "<<mark1<<"\n";
  cout<<"mark2 = "<<mark2<<"\n";
  cout<<"mark3 = "<<mark3<<"\n";
  }
};
class Extra_activities_marks:virtual public student
{
  protected:
	float marks;
  public:
    void get_score()
    {
	  cout<<"enter marks ";
	  cin>>marks;
    }
  void put_score()
    {
	  cout<<"marks = "<<marks<<"\n";
    }
};
class result:public Academic_marks,public Extra_activities_marks
{
     float total;
   public:

     void display()
     {
	 total=mark1+mark2+mark3+marks;
	 put_number();
	 put_marks();
	 put_score();
	 cout<<"total score: "<<total<<"\n";
	 if(total>=300)
	   cout<<"Grade:"<<"A";
	 else if(total>=200)
	   cout<<"Grade:"<<"B";
	 else
	   cout<<"Grade:"<<"C";
     }

};

void main()
{
  int i,n,ch,t;
  cout<<"enter number of students ";
  cin>>n;
  result *s=new result[n];
  do
  {
     cout<<"1.Get details "<<endl;
     cout<<"2.calculate total and display "<<endl;
     cout<<"3.Exit";
     cout<<"enter your choice ";
     cin>>ch;
     switch(ch)
     {
	case 1:for(i=0;i<n;i++)
	       {
		s[i].get_number();
		s[i].get_marks();
		s[i].get_score();
	       }
	       break;
	case 2:for(i=0;i<n;i++)
	       s[i].display();
	       break;

	case 3:exit(0);
      }
   }while(ch<=3);
getch();
}



