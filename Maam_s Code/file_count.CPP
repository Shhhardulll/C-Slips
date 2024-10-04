/* count chars,words,newlines in a file */
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
main()
{
  fstream fp;
  char ch;
  int nol=0,nob=1,noc=0;
  clrscr();
  fp.open("demo.txt",ios::in | ios::out);
  while(fp)
  {
	fp.get(ch);

      noc++;
	if(ch==' '|| ch=='\n')
	  nob++;
	if(ch=='\n')
	  nol++;

  }
  fp.close();
  cout<<"\n number of characters "<<noc;
  cout<<"\n number of blanks "<<nob;
  cout<<"\n number of lines "<<nol;
}