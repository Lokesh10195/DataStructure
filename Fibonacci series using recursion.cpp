#include<iostream>
using namespace std;
int fibo(int);
int main()
{
	int n,i,j;
	cout<<"Enter Number of terms: ";
	cin>>n;
	cout<<"Fibonacci series : ";
	for(i=0;i<n;i++)
	  cout<<fibo(i)<<"  ";
}
int fibo(int i)
{
	if(i<=1)
	  return i;
	
	else 
	  return fibo(i-1)+fibo(i-2);
}
