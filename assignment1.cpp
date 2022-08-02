#include<iostream>
using namespace std;
#define MAX 50
void read(int [],int &);
void display(int [],int);
void sort(int[],int);
void swap(int &,int &);
int main()
{
	int n;
	int arr[MAX];
	read(arr,n);
	cout<<"Displaying the array elements: \n";
	display(arr,n);
	sort(arr,n);
	cout<<"Displaying the array after sorting: \n";
	display(arr,n);
	return 0;
}
void read(int arr[],int &n)
{
	cout<<"\nEnter the number of array elements : ";
	cin>>n;
	cout<<"\nEnter "<<n<<" elements : \n";
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void swap(int &a,int &b)
{
	int c=a;
	a=b;
	b=c;
}	
void sort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{if(arr[i]>arr[j])
			{
			swap(arr[i],arr[j]);
			}
		}		
	}
}
