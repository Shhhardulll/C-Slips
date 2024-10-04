#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
const size=3;
class vector
{
  int *v;
public:
  vector();
  friend vector operator *(int a,vector b);
  friend vector operator +(int s,vector b);
  friend istream & operator>>(istream &,vector &);
  friend ostream & operator<<(ostream &,vector &);
};
vector::vector()
{

	  v=new int [size];
}

vector operator *(int a,vector b)
{
   vector c;
   for(int i=0;i<3;i++)
	 c.v[i]= a * b.v[i];
   return c;
}
vector operator +(int s,vector b)
{
  int i;

  cout<<"enter position to be modified ";
  cin>>i;

  b.v[i]=s+b.v[i];
  return b;
}

istream & operator>>(istream &din,vector &b)
{
   for(int i=0;i<3;i++)
	   din >> b.v[i];
   return(din);
}
ostream & operator<<(ostream &dout,vector &b)
{
   dout<<"("<<b.v[0];
   for(int i=1;i<3;i++)
	   dout << " , " <<b.v[i];
   dout<<")";
   return(dout);
}

void main()
{
   vector m;
   int ch;
   clrscr();
   do
   {
	  cout<<"1. Accept vector "<<endl;
	  cout<<"2. Display vector "<<endl;
	  cout<<"3. Multiply by a scalar "<<endl;
	  cout<<"4. Modify  "<<endl;
	  cout<<"5. Exit "<<endl;
	  cout<<"Enter your choice"<<endl;
	  cin>>ch;
	  switch(ch)
	  {

		  case 1:cout<<"enter elements of vector m "<<"\n";
				 cin>>m;   //invokes operator >>() function
				 cout<<"\n";
				 break;
		  case 2:cout<<"m= "<< m << "\n"; //invokes operator <<()
				 break;
		  case 3:vector p;
				 p=2*m;
				 cout<< "\n";
				 cout<<"p= "<< p <<"\n";  // invokes operator <<()
				 break;
		  case 4:vector n;
				 n=2+m;
				 cout<<"n= "<<n;
				 cout<<"\n";
				 break;
		  case 5:exit(0);
	  }
	}while(ch>=1 && ch<=5);
   getch();

}
