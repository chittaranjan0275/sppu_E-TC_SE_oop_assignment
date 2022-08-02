#include<iostream>
using namespace std;
class basic_info
{
string name;
int emp_id;
public:
void read1()
{
cout<<"Enter your basic info:\n1. Enter Name: ";
cin>>name;
cout<<"2. Enter EMP_ID: ";
cin>>emp_id;
}
void display1()
{
cout<<"\n1. Name: "<<name<<"\n2. Employee Id: "<<emp_id;
}
};
class dep_info
{
string department,position;
int salary;
public:
void read2()
{
cout<<"Enter department info:\n1. Enter Department(eg. IT ,ACCOUNTS,): ";
cin>>department;
cout<<"2. Enter Position(eg. MANAGER , SUBMANAGER , CLERK): ";
cin>>position;
cout<<"3. Enter Salary(in Rs): ";
cin>>salary;
}
void display2()
{
cout<<"\n3. Dept.: "<<department<<"\n4. Position: "<<position<<"\n5. Salary: "<<salary;
}
};
class employee:public basic_info,public dep_info
{
};
int main()
{

employee a[5];
int n;
cout<<"Enter no. of Employee: ";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"\nFor Employee no. "<<i+1<<" :\n";
a[i].read1();
a[i].read2();
}
for(int i=0;i<n;i++)
{
cout<<"\n---------------------------------------------------------------------------------------------------\nDetails ofEmployee "<<i+1<<" are:- ";
a[i].display1();
a[i].display2();
}
cout<<"\n===========================================================================================================\n";
}
