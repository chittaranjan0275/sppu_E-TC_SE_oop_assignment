#include<iostream>
using namespace std;
void read( int [],int & );
void display( int [], int );
void sort( int [], int & );
void swap( int & , int & );
int main()
{
	int a[10],n;
	read(a,n);
	display(a,n);
	sort(a,n);
	return 0;
}
void read( int a[10], int &n)
{
	int i;
	cout<<"Enter the Size of array a :";
	cin>>n;
	cout<<"\nEnter the element of arrray a :\n";
	for (i=0;i<n;i++)
		cin>>a[i];
}
void display(int a[10], int n)
{
	int i;
	cout<<"\nThe array elements are:";
	for(i=0;i<n;i++)
		cout<<"\nA["<<i<<"] : "<<a[i];
}
void sort(int a[10], int &n)
{
	int i,j;
		for(i=0;i<n;i++)
			for(j=i+1;j<n;j++)
				if(a[i]>a[j])
				{
					swap(a[i],a[j]);
				}
				cout<<"\nSorted Array Is";
				for(i=0;i<n;i++)
				cout<<"\nA["<<i<<"] : "<<a[i];
}
void swap(int &x, int &y)
{
	int t=x;
	x=y;
	y=t;
}
