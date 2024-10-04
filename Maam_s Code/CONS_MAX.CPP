/* Prog.no.11 Write a C++ program using class which contains two data members of type integer. Create and initialize the object using default constructor, parameterized constructor and parameterized constructor with default value. Write a member function to display maximum from given two numbers for all objects. */

#include<iostream.h>
#include<conio.h>
class num
{
	int a,b;

	public:
	num() {a=0;  b=0;}
	num (int x,int y=4) {a=x;  b=y;}

	int max() { return (a>b)?a:b;}
};
void main()
{
int c,d;
clrscr();

cout<<"Enter two integers ";
cin>>c>>d;
num n1(c,d);
num n2(c);

cout<<"parameterised constructor "<<endl;
x=n1.max();
cout<<"greater number is "<<x<<endl;
cout<<"constructor with default argument"<<endl;
y=n2.max();
cout<<"greater number is "<<y;
getch();
}