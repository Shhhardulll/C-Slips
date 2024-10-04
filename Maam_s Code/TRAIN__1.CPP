/* Create a Base class Train containing protected data members as Train_no, Train_Name. Derive a class Route (Route_id, Source, Destination) from Train class. Also derive a class Reservation(Number_Of_Seats, Train_Class, Fare, Travel_Date) from Route. Write a C++ program to perform following necessary functions :
i.	Enter  details of n reservations
ii.	Display details of all reservations 
iii.	Display reservation details of a specified Train class */                

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
class train
{
 protected :
	int tno;
	char tname[20];
 public:
 void getdata()
 {
	cout<<"enter train no : \n";
	cin>>tno;
	cout<<"enter train name : \n";
	cin>>tname;
 }
 void putdata(void)
 {
	cout<<"\nenter train no : "<<tno;
	cout<<"\nenter train name : "<<tname;
 }
};
class route : public train
{
 protected:
	int rid;
	char dest[20];
	char source[15];
 public:
 void getroute()
 {
	cout<<"Enter route id : "<<"\n";
	cin>>rid;
	cout<<"Enter destination : "<<"\n";
	cin>>dest;
	cout<<"Enter source : "<<"\n";
	cin>>source;
 }
 void putroute(void)
 {
	cout<<"\nRoute id : "<<rid;
	cout<<"\nDestination : "<<dest;
	cout<<"\nSource : "<<source;
 }
};
class reservation : public route
{

	int no_seat,fare;
	char train_class[20],date[15];
	public:
void getreservation()
{
	getdata();
	getroute();
	cout<<"\nEnter no of seats : ";
	cin>>no_seat;
	cout<<"\nEnter train class : ";
	cin>>train_class;
	cout<<"\nEnter fare : ";
	cin>>fare;
	cout<<"\nEnter travel date : ";
	cin>>date;
}
void putreservation()
{
	putdata();
	putroute();
	cout<<"\nSeats are : ";
	cout<<no_seat;
	cout<<"\nTrain class : ";
	cout<<train_class;
	cout<<"\nFare is : ";
	cout<<fare;
	cout<<"\nTravel date : ";
	cout<<date;
}
void check_class(char *c)
{
	if(strcmp(train_class,c)==0)
	putreservation();
}
};

int main()
{
	
	 int ch,n,i;
         cout<<"\nEnter how many train details ";
	 cin>>n;
         reservation *r=new reservation[n];

	 char c[20];
	 clrscr();
	 while(1)
	 {
		cout<<"\n1.Enter details of  reservation ";
		cout<<"\n2.display Reservation ";
		cout<<"\n3.Display reservation of specific class ";
		cout<<"\n4.Exit";
		cout<<"\nEnter your choice ";
		cin>>ch;
		switch(ch)
		{
			case 1 :
				
				for(i=0;i<n;i++)
				{
					r[i].getreservation();
				}
				break;
			case 2 :
				cout<<"\nDetails are : ";
				for(i=0;i<n;i++)
				{
					r[i].putreservation();
				}
				break;
			case 3 :
				cout<<"\nenter specific class ";
				cin>>c;
				for(i=0;i<n;i++)
				{
					r[i].check_class(c);
				}
				break;
			case 4 :exit(0);

	 }
	}
}

