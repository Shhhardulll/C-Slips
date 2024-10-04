//constructor overloading
#include<iostream.h>
#include<conio.h>
class num
{
    int data;
    public:
    num() {data=0;}
    num (int a) {data=a;}
    num (num& n) {data=n.data;}
    void display() { cout<<data;}
};
void main()
{
num n1;
num n2(20);
num n3=n2;
n1.display();
cout<<endl;
n2.display();
cout<<endl;
n3.display();
}