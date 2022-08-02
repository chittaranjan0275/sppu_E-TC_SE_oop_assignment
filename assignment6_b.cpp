#include<iostream>
#include<cstring>
using namespace std;

class Mystring
{
char * str;//Declare the char pointer variable for dynamic memory address
char r1[10];
public:
Mystring(); //Default Constructor
Mystring(char *val);
void accept();
void display(); //Display Function
};
Mystring::Mystring()
{
str=new char[1]; // Create the dynamic memory using new opertor
str[0]='\0'; //Enter the null character
}
Mystring::Mystring(char *val)
{
   if(val==NULL)
   {
   	str=new char[1];
   	str[0]='\0';
   }
   else
   {
   	str=new char[strlen(val)+1];
   	strcpy(str,val);
   }
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
Mystring r1;
r1.accept();
r1.display();

char temp[]="oop";
Mystring r2(temp);
r2.display();
return 0;
}

