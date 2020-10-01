#include<iostream>     //RONAK KHANDELWAL-184069-DELETION IN ARRAY
using namespace std;
int main()
{
	int n,i,j,k,p=0;
	int a[50];
	cout<<"Enter Number of elements:";
	cin>>n;
	cout<<"Enter elements:";
	for(i=0;i<n;i++)
	 cin>>a[i];
	 
	cout<<"\nEnter a number which you want to delete:";
	cin>>k;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			for(j=i;j<n-1;j++)
	         a[j]=a[j+1];
	        i--;
	        p=p+1;
		}
	}
	n=n-p;
	for(i=0;i<n;i++)
	  cout<<a[i]<<" ";
}
