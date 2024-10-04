//Write a C++ class MyString with data members a character pointer 
// and str_length(use new and delete operator) 
// Write C++ program using operator overloading to perform the following operation:
// i. !   To reverse the case of each alphabet from given string.
// ii. +  To add constant 'n' to each alphabet of given string.
#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
class String
{
  char *str;
  int length;
  public:
  String(char s[])
  {

	  length=strlen(s);
	  str=new char(length);
	  strcpy(str,s);
  }
  void display()
  { cout<<"The string is  "<<str;}
  ~String() {delete str;}
void operator !();
char* operator + (int n);
};
char * String::operator+(int n)
{
  for(int i=0;str[i]!='\0';i++)
      str[i]=str[i]+n;
  return(str);
}



void String::operator !()
{

  for(int i=0;str[i]!=0;i++)
  {
  if(str[i]>=65 && str[i]<=90)
	 str[i]=tolower(str[i]);

  else
	str[i]=toupper(str[i]);
  }
  cout<<str;

}
void main()
{
  String s1("aBcD");
  int i;
  clrscr();
  s1.display();
  cout<<"after changing case ";
  !s1;
  cout<<"\nEnter constant ";
  cin>>i;
  cout<<"After adding constant "<<s1+i<<endl;

  getch();
}



