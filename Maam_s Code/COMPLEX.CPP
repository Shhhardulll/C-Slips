/* Create a class ComplexNumber containing members as:
- real 
- imaginary
Write a C++ program to calculate and display the sum of two complex numbers. (Use friend function and return by object) */	

#include<iostream.h>
#include<conio.h>
class complex
{
   private:
	float x;  //real part
	float y; //imaginary part
   public:
	complex() { }
	complex(float,float);
	friend complex operator + (complex,complex);
	void display(void);
};
complex::complex(float real,float imag)
{
   x=real;
   y=imag;
}
void complex::display(void)
{
   cout<<x<<"+"<<y<<"i\n";
}
complex operator+(complex c,complex d)
{
   complex temp;
   temp.x=c.x+d.x;
   temp.y=c.y+d.y;
   return(temp);
}
void main()
{
complex c1,c2,c3;
clrscr();
c1=complex(3.5,2.5);
c2=complex(1.1,1.7);
c3=c1+c2;
cout<<"c1=";
c1.display();
cout<<"c2=";
c2.display();
cout<<"c3=";
c3.display();
}

