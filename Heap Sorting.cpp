#include<iostream>       
using namespace std;
void heapsort(int[],int);
void maxheap(int[],int,int);
void swap(int*,int*);
int main()
{
	int a[100];
	int n,i,j;
	cout<<"Enter no. of elements:";
	cin>>n;
	cout<<"Enter Elements:";
	for(i=0;i<n;i++)
	  cin>>a[i];
	heapsort(a,n);
	cout<<"\n\nSorted Array: ";
	for(i=0;i<n;i++)
	  cout<<a[i]<<" ";
}

void maxheap(int a[],int n,int i)
{
	int max=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n&&a[l]>a[max])
	   max=l;
	if(r<n&&a[r]>a[max])
	  max=r;
	if(max!=i)
	{
		swap(a[max],a[i]);
		maxheap(a,n,max);
	}
}

void heapsort(int a[],int n)
{
	int i;
   for(i=n/2-1;i>=0;i--)
      maxheap(a,n,i);
   
   for(i=n-1;i>=0;i--)
   {
      swap(a[i],a[0]);
   	  maxheap(a,i,0);
   }
}

void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

