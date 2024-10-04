//Write a C++ program to create a class Product with data members 
//Product_id, Product_name,Qty,Price. Writeb member functions to 
//accept and display Product information. Also display the number of objects created
//for Product class(Use static data member and static member function)
#include<iostream.h>
#include<conio.h>
class Product
{
	  int Product_id;
	  char Product_name[15];
	  int Qty;
	  float Price;
	  static int count;
  public:
	  void accept()
	  {
		 cout<<"Enter product name: ";
		 cin>>Product_name;
		 cout<<"Enter quantity: ";
		 cin>>Qty;
		 cout<<"Enter price ";
		 cin>>Price;
		 Product_id=++count;
	  }
	  void show()
	  {
		 cout<<"Product number: "<<Product_id<<"\n";
		 cout<<"Product name: "<<Product_name<<"\n";
		 cout<<"Quantity: "<<Qty<<"\n";
		 cout<<"Price: "<<Price<<"\n";
	  }
	  static void showcount()
	  {
		 cout<<"Count of objects created: "<<count<<"\n";
	  }
};
 int Product::count;
 int main()
 {
   Product t1,t2;
   clrscr();
   t1.accept();
   t2.accept();
   Product::showcount();
   t1.show();
   t2.show();
   return 0;
}

