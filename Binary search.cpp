#include<iostream>           //RONAK KHANDELWAL-184069-BINARY SEARCH
using namespace std;
int main()
{
	int n,i,beg,end,mid,x,j=0,a[50];
    cout<<"Enter Number of elements in array:";    cin>>n;
    cout<<"Enter Elements in ascending order:";
    for(i=0;i<n;i++)
       cin>>a[i];	
	cout<<"Enter number which you want to find:";    cin>>x;
	beg=0;
	end=n-1;
    mid=(beg+end)/2;
	while(end>=beg)
	{
	    if(a[mid]==x)
	    {
		   j=j+1;
		   break;
    	}
    	else if(a[mid]>x)
    	{
    		end=mid-1;
			mid=(beg+end)/2;
		}
		else if(a[mid]<x)
    	{
    		beg=mid+1;
			mid=(beg+end)/2;
		}
    }
    if(j==0)
       cout<<"Number is not found.";
   	else
	  cout<<"Successful number is present\n"<<"Position is:"<<mid+1;
}
