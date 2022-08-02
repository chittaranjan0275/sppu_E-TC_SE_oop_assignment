#include<iostream>
using namespace std;

class Complex
{
	    float real,img;
	public:
		void read()
		{
			cout<<"\nEnter the real part:";
			cin>>real;
			cout<<"\nEnter the imaginary part:";
			cin>>img;
		}
		void display()
		{
			if(img<0)
			{
		    	cout<<"\nNumber is:"<<real<<"-i"<<(-img)<<endl;
		    }
		    else
		    {
		    		cout<<"\nNumber is:"<<real<<"+i"<<(img)<<endl;
			}
	    }
	    Complex add(Complex T2)
	    {
	    	 Complex T1;
	         T1.real=real+T2.real;
			 T1.img=img+T2.img;	
			 return T1;
		}
		Complex sub(Complex T2)
		{
			 Complex T1;
	         T1.real=real-T2.real;
			 T1.img=img-T2.img;	
			 return T1;
		}
		Complex mul(Complex T2)
		{
			Complex T1;
	        T1.real=real*T2.real-img*T2.img;
			T1.img=real*T2.img+img*T2.real; 	
			return T1;
		}
		Complex div(Complex T2)
		{
			Complex T1;
			T1=mul(T2.conj());
			T1.real=T1.real/(T2.real*T2.real+T2.img*T2.img);
			T1.img=T1.img/(T2.real*T2.real+T2.img*T2.img);
			return T1;
		}
		Complex conj()
		{
			Complex T1;
			T1.real=real;
			T1.img=(-1*img);
			return T1;
		}
		
};

int main()
{
	cout<<"\nChittaranjan Rathod\nBatch:G8\nRollno.22451";
	Complex C1,C2,C3;
	C1.read();
	C1.display();
	C2.read();
	C2.display();
	C3=C1.add(C2);
	cout<<"\nAfter addition:";
	C3.display();
	C3=C1.sub(C2);
	cout<<"\nAfter subtraction:";
	C3.display();
	C3=C1.mul(C2);
	cout<<"\nAfter multiplication:";
	C3.display();
	C3=C1.div(C2);
	cout<<"\nAfter division:";
	C3.display();
	C3=C1.conj();
	cout<<"\nConjugate of 1st complex no.:";
	C3.display();
	C3=C2.conj();
	cout<<"\nConjugate of 2nd complex no.:";
	C3.display();
	return 0;
}
