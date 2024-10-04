//Friend function to two classes- to find the maximum number
#include<iostream.h>
#include<conio.h>
class num1;
class num2
  {
  int a;
  public:
  void read()
  {
  cout<<"enter a: ";
  cin>>a;
  }
  friend float max(num1,num2);
};
class num1
 {
 int b;
 public:
 void readnum()
  {
  cout<<"enter b:";
  cin>>b;
  }
friend float max(num1,num2);
};
float max(num1 n1,num2 n2)
  {
  if(n1.b>n2.a)
    return n1.b;
  else
   return n2.a;
   }
void main()
  {
  num1 abc;
  num2 xyz;
  abc.readnum();
  xyz.read();
  cout<<" Max is : "<<max(abc,xyz);
  }





