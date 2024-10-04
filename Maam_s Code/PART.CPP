/*Write a C++ program to create a class Part which contains
data members as Part_Id, Part_Name, Part_Price. 
Create and Initialize all values of Part object by using parameterized constructor
and copy constructor. Display the values of Part object.
(Part_price should be right justified with a precision of two digits)*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
class Part
{
	int Part_id;
	char Part_name[15];
	float Part_price;
	public:

	Part (int id,char n[],float pr)
	{
		Part_id=id;
		strcpy(Part_name,n);
		Part_price=pr;

	}
	Part (Part& p)
	{
	   Part_id=p.Part_id;
	   strcpy(Part_name,p.Part_name);
	   Part_price=p.Part_price;
	}
	void display()
	{
	  cout<<"Part id "<<Part_id<<endl;
	  cout<<"Part name "<<Part_name<<endl;
	  cout<<"Part price ";
	  cout.precision(2);
	  cout.fill('*');
	  cout.setf(ios::right,ios::adjustfield);
	  cout.width(10);
	  cout<<Part_price;


	}
};
void main()
{
  clrscr();

  Part p1(101,"xxxx",100.555);
  p1.display();
  cout<<endl;
  Part p2(p1);
  p2.display();
  getch();

}