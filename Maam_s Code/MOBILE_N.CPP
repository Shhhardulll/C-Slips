#include<stdio.h>
#include<iostream.h>
#include<string.h>
#include<conio.h>
class mobile
  {
  char model_no[10];
  char company[10];
  float price;
  int stock;
  public:

   void accept()
   {
     cout<<"Model no";
     cin>>model_no;
     cout<<"Company ";
     cin>>company;
     cout<<"Price ";
     cin>>price;
     cout<<"Stock ";
     cin>>stock;
   }

   void display()
   {
   cout<<"model_no "<<model_no<<endl;
   cout<<"company "<<company<<endl;
   cout<<"price "<<price<<endl;
   cout<<"stock "<<stock<<endl;
   }
   int sale(char aa[])
   {
   int n,f=0;
   if(strcmp(aa,model_no)==0)
     {
	 cout<<"present"<<"\n";
	 display();
	 cout<<"enter no.of mobiles to be sold ";
	 cin>>n;
	 if(n<=stock)
	 {  cout<<"sufficient stock "<<"\n";
		stock=stock-n;
		cout<<"stock left "<<stock;
	  }
	 else
	   {
		  cout<<"insufficient stock "<<"\n";
		  n=n-stock;
		  purchase(n);
	   }

	 return 0;
	 }
   else
	 {
		return 1;
	 }
   }

   void purchase(int x)

   {
	  display();
	  cout<<"no.of mobiles to purchase "<<x;
   }
};
void main()
{

   int n;
   mobile *b;
   cout<<"Enter how many mobiles?" ;
   cin>>n;
   b=new mobile[n];
   clrscr();
   for(int i=0;i<n;i++)
	b[i].accept();
    i--;

   cout<<"enter the model_no which you wish to search?";
      char anm[10];
      cin>>anm;
      int f;
      for(int j=0;j<=i;j++)
      {
      f=b[j].sale(anm);
      if(f==0)
	break;
      if(j==i)
	cout<<"not present";
       }
   }



