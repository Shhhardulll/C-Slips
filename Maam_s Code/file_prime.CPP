/* Write a C++ program which will accept ‘n’ integers from user through command line argument. 
Store Prime numbers in file “Prime.txt” and remaining numbers in “Others.txt”.*/
#include<iostream.h>
#include<fstream.h>
#include<stdlib.h>
void main(int argc,char * argv[])
{
  ofstream fout1,fout2;
  int i,n;
  fout1.open("prime1.txt");
  fout2.open("others.txt");
  cout<<"enter how many numbers ";
  cin>>n;
  for(int j=1;j<=n;j++)
  {
	 int num=atoi(argv[j]);
  for( i=2;i<=num-1;i++)
  {
	 if(num%i==0)
	 {
	   fout2<<num;
	   break;
	 }
  }
  if(i==num)
	fout1<<num;
  }

  fout1.close();
  fout2.close();
  ifstream fin;
  char ch;

	 fin.open("prime1.txt");
	 cout<<"contents of"<<"prime1.txt"<<"\n";
	 do
	 {
	  fin.get(ch);    //read a value
	  cout<<ch<<"\t";       //display it
	 }  while(fin);
	 cout<<"\n\n";
	 fin.close();
	 fin.open("others.txt");
	 cout<<"contents of"<<" others.txt"<<"\n";
	 do
	 {
	  fin.get(ch);    //read a value
	  cout<<ch<<"\t";       //display it
	 } while(fin);
	 fin.close();
  }