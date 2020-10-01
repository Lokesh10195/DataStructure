#include<iostream>
using namespace std;

class min_max{
	public:
	int min;
	int max;
};

min_max minmax(int [] ,int ,int ,int ,int );

int main()
{
	int n,i,low,high;
	min_max MaxMin;
	int A[50];
	cout<<"Enter number of element:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	low=0;
	high=n-1;
	int Min;
	int Max;
	MaxMin=minmax(A,low,high,Min,Max);
	cout<<"Maximum element is: "<<MaxMin.max;
	cout<<"\nMinimum element is: "<<MaxMin.min;
		
}
min_max minmax(int A[],int low,int high,int Min,int Max)
{
	min_max m,l,r;
	if(low==high)
	{
		m.max=A[low];
		m.min=A[high];
		return m;
	}
	else if(low==high-1)
	{
		if(A[low]>A[high])
		{
	    	m.max=A[low];
	    	m.min=A[high];
	    }
	    else
	    {
	       m.max=A[high];
		   m.min=A[low];
		}
		return m;
	}
	else 
	{
		int mid=(high+low)/2;
		l=minmax(A,low,mid,l.min,l.max);
		r=minmax(A,mid+1,high,r.min,r.max);
		
		if(l.max>r.max)
	    {
	     	m.max=l.max;
		}
		else
		  m.max=r.max;
		
		if(l.min<r.min)
		   m.min=l.min;
		else
		   m.min=r.min;
		   
		   
	   return m;
		
		
	}
}

