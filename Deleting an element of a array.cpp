#include<iostream>
using namespace std;
int main()
{
	int n=5,i,k;
	int a[n]={1,2,3,4,5};
	for(i=0;i<n;i++)
	 cout<<a[i];
	cout<<"\nEnter a position of a number which you want to delete:\n";
	cin>>k;
	for(i=k;i<n;i++)
	  a[i-1]=a[i];

    n=n-1;
    for(i=0;i<n;i++)
       cout<<a[i];
	
}
