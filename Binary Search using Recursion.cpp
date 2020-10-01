#include<iostream>         
using namespace std;
int searching(int[],int ,int ,int,int);
int main()
{
	int n,i,beg,end,mid,x,j,a[50];
    cout<<"Enter Number of elements in arra :";   cin>>n;
    cout<<"Enter Elements in ascending order:";
    for(i=0;i<n;i++)
       cin>>a[i];	
    cout<<"Enter number which you want to find:";   cin>>x;
	beg=0; end=n-1;
	j=searching(a,beg,end,x,n);
    if(j==-1)
      	cout<<"Number is not found.";
    else
	  cout<<"Successful number is present\n"<<"Position is:"<<j+1;
}
int searching(int c[],int b,int e,int i,int n)
{
	int mid=(b+e)/2;
	    if(c[mid]==i)
	       return mid;
        else if(c[mid]>i)
    	{
    	    e=mid-1;
			return searching(c,b,e,i,n);
		}
		else if(c[mid]<i)
    	{
    		b=mid+1;
			return searching(c,b,e,i,n);
		}
      return -1;	
}
