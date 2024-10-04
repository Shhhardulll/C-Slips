//Program on function overloading- area of cone,sphere,circle

#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#define PI 3.14

		void area(float,float);
		void area(double);
		void area(float);

void main()
{
	 int ch;

	 float r,l;
	 double r1;
	 clrscr();
	 do
	 {
	 cout<<"\n\t\tFunction Overloading";
	 cout<<"\n1.Area of Cone\n2.Area of sphere\n3.Area of circle\n4.Exit\n";
	 cout<<"Enter your Choice:";
	 cin>>ch;
	 switch(ch)
	 {
			  case 1:
				cout<<"Enter Radius and length of the cone:";
				cin>>r>>l;
				area(r,l);
				break;
			  case 2:
				cout<<"Enter radius of sphere:";
				cin>>r1;
				area(r1);
				break;
			  case 3:
				cout<<"Enter radius of circle";
				cin>>r;
				area(r);
				break;
			  case 4:
				exit(0);
	 }
	}while(ch>=1 && ch<=4);
getch();
}
void area(float r,float l)
{
	  cout<<"Area of Cone:"<<PI*r*(r+l);
}
void area(double r)
{
	  cout<<"Area of sphere:"<<4*PI*r*r;
}
void area(float r)
{
	  cout<<"Area of circle:"<<PI*r*r;
}
