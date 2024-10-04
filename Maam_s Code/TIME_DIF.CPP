#include<iostream.h>
#include<conio.h>
class time
{
  int hrs,mins,secs;
public:
  time()
  {hrs=mins=secs=0;}
  time(int h,int m,int s)
  {hrs=h;mins=m;secs=s;}
  void display()
  {cout<<hrs<<":"<<mins<<":"<<secs;}
  void diff_time(time t1,time t2)
    {
      secs=t1.secs-t2.secs;
      if(secs<0)
	 secs=-(secs);
      if(secs>59)
	{secs-=60;mins++;}
      mins+=(t1.mins-t2.mins);
      if(mins<0);
	mins=-(mins);
      if(mins>59)
	{mins-=60;hrs++;}
      hrs+=(t1.hrs-t2.hrs);
      if(hrs<0)
	hrs=-(hrs);
    }
};
void main()
  {
     time time1(5,59,59);
     time time2(4,30,30);
     time time3;
     clrscr();
     time3.diff_time(time2,time1);
     time3.display();
  }

