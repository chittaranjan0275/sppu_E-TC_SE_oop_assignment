#include<iostream>
using namespace std;
class stack
{
	private:
		int *s;
		int top,size;
	public:
		stack(int);
		~stack();
		void push(int);
		int pop();
		void display();
};
stack::~stack()
{
	delete s;
	cout<<"Destructor Initialized!!\n";
}
stack::stack(int x)
{
	size=x;
	cout<<"Constructor Initialized!!\n";
	top=-1;
	s=new int[size];
	cout<<"Stack size is : "<<size<<endl;
}
void stack::push(int x)
{
	if(top==size-1)
	{
		throw x;
	}
	else
	{
		top++;
		s[top]=x;
	}
}
int stack :: pop()
{
	int del;
	if(top==-1)
	{
		throw top;
	}
	else
	{
		del=s[top];
        top--;
	}
	return del;
}
void stack :: display()
{
	int i;
	cout<<"Stack Elements are \n";
	for(i=top ; i>=0 ; i--)
	{
		cout<<s[i]<<"\n"<<endl;
	}
}
int main()
{
	int x;
	cout<<"Enter size : ";
	cin>>x;
	stack obj(x);
	int choice,n,a;
	do
	{
		cout<<"Enter choice \n";
		cout<<"1. Push \n";
		cout<<"2. Pop \n";
		cout<<"3. Display \n";
		cout<<"4. Empty \n";
		cin>>choice;
		switch(choice)
		{
			case 1:
            	cout<<"Enter any element to push : ";
            	cin>>n;
            	try
            	{
            		obj.push(n);
				}
				catch(int n)
				{
					cout<<"Exception occurred\n";
					main();
				}
            	break;
        	case 2:
        		try
            	{
            		a=obj.pop();
				}
				catch(int n)
				{
					cout<<"Exception occurred\n";
					main();
				}
            	cout<<a<<" Element get pop\n";
            	break;
            case 3:
            	obj.display();
            	break;
        	case 4:
            	return(1);
            	break;
            default:
            	cout<<"Enter Valid Option!!\n";
        }
	}while(1);
}
2
2
