/* Write a C++ program to read the contents of a Sample.txt file.
 Store all the uppercase characters in Upper.txt,
 lowercase characters in Lower.txt and digits in Digit.txt files.
 Change the case of each character from Sample.txt and store it in Convert.txt file. */



#include<iostream.h>
#include<ctype.h>
#include<fstream.h>
#include<conio.h>
void main()
{
   fstream f1("sample.txt",ios::in);
   fstream f2("uppchar.txt",ios::out);
   fstream f3("lowchar.txt",ios::out);
   fstream f4("digit.txt",ios::out);
   fstream f5("convert.txt",ios::out);
   char c;
   while(f1)
   {
	  f1.get(c);
	  if(isdigit(c))
	  {
		 f4.put(c);
	  }
	  else if(isalpha(c))
	  {
		 if(c>=97 && c<=122)
		   f3.put(c);
		 else if(c>=65 && c<=90)
			 f2.put(c);
	  }
   }
   f1.close();
   f2.close();
   f3.close();
   f4.close();
   fstream f6("sample.txt",ios::in);
   while(f6)
   {
	  f6.get(c);
	  if(isalpha(c))
	  {
		 if(c>=97 && c<=122)
		 {
		   c=toupper(c);
			 f5.put(c);
		 }
		 else if(c>=65 && c<=90)
		 {
		   c=tolower(c);
			 f5.put(c);
		 }
	   }
	}
	f6.close();
	f5.close();

}
