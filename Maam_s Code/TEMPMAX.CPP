// to find maximum of two values using a function template
#include<iostream.h>
#include<conio.h>
template <class J>
J max(J a,J b)
{
  return(a>b?a:b);
}
void main()
{

  cout<<"maximum of the two integers is : "<<endl<<max(20,10)<<endl;
  cout<<"maximum of two float values is :"<<endl<<max(5.5,7.5)<<endl;

}