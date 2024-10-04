//FUCNTION OVERLOADING 

#include<iostream.h>
#include<conio.h>


void avg(float x,float y,float z)
{
    float averg;
    averg=(x+y+z)/3;
    cout<<"\n The Average of float is "<<averg;
     
}

void avg(int x,int y,int z)
{
    float average;
    average=(x+y+z)/3.0;
    cout<<"The Average of int is "<<average;
    
}

int main()
{
    int x,y,z;
    float a,b,c;
    clrscr();
    cout<<"Enter three number (int)"<<endl;
    cin>>x>>y>>z;
    avg(x,y,z);
    cout<<"\n Enter three number (float)"<<endl;
    cin>>a>>b>>c;
    avg(a,b,c);
    return 0;
}
