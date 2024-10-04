/* Write a C++ program to create a class Department which contains 
data members as Dept_Id, Dept_Name, H.O.D., Number_Of_staff.
Write necessary member functions to 
i) Accept details from user for ‘n’ departments and write it in a file “Dept.txt”.
ii) Display details of department from a file.
iii)Count the number of objects stored in a file.*/
																																																																																				
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
class dept
{
  int did;
  char dname[20],hod[20];
  int staff;
 public:
  void accept()
  {
   cout<<"\nEnter Dept Id : ";
   cin>>did;
   cout<<"\nEnter Dept Name : ";
   cin>>dname;
   cout<<"\nEnter HoD's Name : ";
   cin>>hod;
   cout<<"\nEnter No. Of Staff : ";
   cin>>staff;
  }
  void display()
  {
   cout<<"\nDept Id : "<<did<<"\nDept name : "<<dname<<"\nHoD's Name : "<<hod<<"\nNo Of Staff Are : "<<staff;
  }
};

int main()
{
 char ch;
 dept o;
 
 fstream file;
 clrscr();
 file.open("Depart.txt",ios::in | ios::out);
 do
 {
 
  o.accept();
  file.write((char *) &o,sizeof(o));
  cout<<"\nDo You Want To Continue : ";
  cin>>ch;
 }while(ch == 'y');
 file.seekg(0);
 while(file.read((char *) &o,sizeof(o)))
 {

  o.display();
 }

int last=file.tellg();
int n=last/sizeof(o);
cout<<"\n\nTotal No Of Departments Are : "<<n;
 
 return 0;
}