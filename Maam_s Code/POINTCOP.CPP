/* Write the definition for a class called ‘point’ that has x & y as integer data members. 
Use copy constructor to copy one object to another.
 (Use Default and parameterized constructor to initialize the appropriate objects)
Write a C++ program for above class.*/

#include<iostream.h>
#include<conio.h>
class point
{
	int x,y;
    public:
	point() {x=0;  y=0;}
	point(int a,int b) {x=a;   y=b;}
	point(point& n) {x=n.x;  y=n.y;}
	void display() { cout<<x<<"  "<<y;}
};
void main()
{
point p1;
point p2(10,20);
point p3=p2;
p1.display();
cout<<endl;
p2.display();
cout<<endl;
p3.display();
}