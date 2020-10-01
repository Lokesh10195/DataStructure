#include<iostream>           //RONAK KHANDELWAL-184069-LINEAR SEARCH IN ARRAY
using namespace std;
int main()
{
	int n,i,item,k=0,p=0;
	int a[50];
	cout<<"Enter number of element:";
	 cin>>n;
	cout<<"Enter elements:";
	for(i=0;i<n;i++)
	  cin>>a[i];

    cout<<"\nEnter a number which you want to search:";
    cin>>item;
    
    for(i=0;i<n;i++)
    {
    	if(a[i]==item)
    	{
    		k=k+1;
    		p=i+1;
    		break;
		}
    }
    if(k==1)
    {
    	cout<<"SUCCESSFULL!\nNumber is found at position "<<p;
	}
	else
	 cout<<"Sorry ,Number is not present.";
}
