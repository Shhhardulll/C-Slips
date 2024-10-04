//program - salesman
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class sales
{
 char s_name[20],p_name[20];
 int quant;
 int target;
 public:
	void accept()
	{
	 cout<<"\n\t Enter salesman's name: ";
	 gets(s_name);
	 cout<<"\n\t enter product name: ";
	 gets(p_name);
	 cout<<"\n\t enter quantity: ";
	 cin>>quant;
	 cout<<"\n\t enter target: ";
	 cin>>target;
	}
	void display();
};
void sales::display()
{
 float com,e_sales;
 com=0;e_sales=0;
 if(quant>target)
 {
  e_sales=quant-target;
  com=(e_sales*0.25)+(target*0.10);
 }
 else if(quant==target)
 {
  com=(target*0.10);
 }
 else
   com=0;
 cout<<"\n\t salesman name: "<<s_name;
 cout<<"\n\t product name: "<<p_name;
 cout<<"\n\t quantity: "<<quant;
 cout<<"\n\t target: "<<target;
 cout<<"\n\t commision: "<<com;
 cout<<"\n\t________________________________";
}

int main()
{
 sales *s;
 int n;
 clrscr();
 cout<<"\n\t enter number of salesperson: ";
 cin>>n;
 s=new sales[n];
 for(int i=0;i<n;i++)
  s[i].accept();
 cout<<"\n\t SALESMAN INFORMATION";
 cout<<"\n\t __________________________________";
 for(i=0;i<n;i++)
  s[i].display();
 getch();
 return 0;
}