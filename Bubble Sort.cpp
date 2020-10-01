#include<iostream>
using namespace std;
int main()
{
	int n,i,k,x;
	int a[50];
	cout<<"Enter number of element:";
	 cin>>n;
	cout<<"Enter elements:";
	for(i=0;i<n;i++)
	  cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		k=0;
		while(k<n-1-i)
		{
			if(a[k]>a[k+1])
			{
			   x=a[k];
			   a[k]=a[k+1];
			   a[k+1]=x;	
			}
			k=k+1;
		}
	}
	cout<<"\nSORTED ARRAY:";
	for(i=0;i<n;i++)
      cout<<a[i]<<" ";
}
