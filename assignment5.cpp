#include<iostream>
using namespace std;

class complex{
	float real;
	float img;
	public:
	void read(){
		cout<<"Enter the real part of complex no.:";
		cin>>real;
		cout<<"Enter the imaginary part of complex no.:";
		cin>>img;
	}
	void display();
	complex  operator+(complex );
	complex  operator-(complex );
	complex operator*(complex );
	complex operator/(complex );
	complex operator~();
};
void complex::display()
{
	if(img<0){
		cout<<real<<"-i"<<-img<<endl;
	}
	else{
		cout<<real<<"+i"<<img<<endl;
	}
	
}
complex complex::operator+(complex c2)
{
	complex temp;
	temp.real=real+c2.real;
	temp.img=img+c2.img;
	return temp;
	
}
complex complex::operator-(complex c2)
{
	complex temp;
	temp.real=real-c2.real;
	temp.img=img-c2.img;
	return temp;
	
}
complex complex::operator*(complex c2)
{
	complex temp;
	temp.real=real*c2.real-img*c2.img;
	temp.img=real*c2.img+img*c2.real;
	return temp;
	
}
complex complex::operator/(complex c2 ) 
{
	complex t1,t2;
	int p,w,x;
	
	t1=(*this)*(~c2);
    p=c2.real*c2.real+c2.img*c2.img;
    t2.real=t1.real/p;
    t2.img=t1.img/p;
    
    return t2;
}

complex complex::operator~()
{
	complex t1;
	t1.real=real;
	t1.img=(-1*img);
	return t1;
}

int main(){
	cout<<"Chittaranjan Rathod \nroll no 22451 \n";
	complex c1,c2,c3;
	int ch=0;
	c1.read();
	c2.read();	
	while(ch!=6)
	{  
	   cout<<"Press 1.Addition  2.Subtraction 3.Multiplication 4.Division 5.Conjugate 6.Exit";	
	   cout<<"Enter your choice:";
	   cin>>ch;
	   switch(ch){
		case 1:
			c3=c1+c2;
			cout<<"Addition= " <<endl;
			c3.display();
			break;
		case 2:
			c3=c1-c2;
			cout<<"Subtraction= "<<endl;
			c3.display();
			break;
		case 3:
			c3=c1*c2;
			cout<<"Multiplication= "<<endl;
			c3.display();
			break;
		case 4:
			c3=c1/c2;
			cout<<"Division= "<<endl;
			c3.display();
			break;
		case 5:
			c3=~c1;
			cout<<"\nConjugate of first complex no:-"<<endl;
			c3.display();
			c3=~c2;
			cout<<"\nConjugate of second complex no:-"<<endl;
			c3.display();
		
		default:
			cout<<"Invalid Choice";
	}
}
}

