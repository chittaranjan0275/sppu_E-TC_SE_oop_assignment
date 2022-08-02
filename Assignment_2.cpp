#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);

int main()
{
	cout<<"\nChittaranjan Rathod\nRollno.:22451";
    int s,l,b;
    float r,bs,ht;
    cout<<"\n Enter the side of a square:";
    cin>>s;
    cout<<"\n Enter length and breadth of rectangle:";
    cin>>l>>b;
    cout<<"\n Enter radius of circle:";
    cin>>r;
    cout<<"\n Enter base and height of triangle:";
    cin>>bs>>ht;
    int as,ar;
    float ac,at;
    as=area(s);
    ar=area(l,b);
    ac=area(r);
    at=area(bs,ht);
    cout<<"\nArea of the square is"<<as;
    cout<<"\nArea of the rectangle is "<<ar;
    cout<<"\nArea of the circle is "<<ac;
    cout<<"\nArea of the triangle is "<<at;
}

int area(int s1)
{
	return s1*s1;
}

int area(int l1, int b1)
{
	return l1*b1;
}

float area(float r1)
{
	return 3.14*r1*r1;
}

float area(float bs1, float ht1)
{
	return 0.5*bs1*ht1;
}
