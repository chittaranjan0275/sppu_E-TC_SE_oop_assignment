#include<iostream>
using namespace std;
namespace ns1
{
int num;
void getdata()
{
cout<<"\nEnter the value of num=";
cin>>num;
}
void display()
{
cout<<"\nnum="<<num;
}
}
namespace ns2
{
double num;
void getdata()
{
cout<<"\nEnter the value of num(double type)=";
cin>>(num);
}
void display()
{
cout<<"\nnum="<<num;
}
}
int main()
{
ns1::getdata();
ns1::display();
ns2::getdata();
ns2::display();
return 0;
}
