#include<iostream>
#include<cstring>
using namespace std;

class Mystring
{
char * str;//Declare the char pointer variable for dynamic memory address
char r1[10];
public:
Mystring(); //Default Constructor
void accept();
void display(); //Display Function
};
Mystring::Mystring()
{
str=new char[1]; // Create the dynamic memory using new opertor
str[0]='\0'; //Enter the null character
}
void Mystring::accept()
{
cout<<"\nEnter the string=";
cin.get(r1,20);
strcpy(str,r1);
}
void Mystring::display()
{
cout<<"\nstr="<<str;
}
int main()
{
Mystring r;
r.accept();
r.display();
return 0;
}

