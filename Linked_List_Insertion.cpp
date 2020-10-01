#include<iostream>                
using namespace std;
class Node{
	public:
	int info;
	Node *link;
};
void display(Node*);
Node* findloc(int,Node*);
int main()
{
	Node *start=NULL,*ptr,*New,*t,*loc;
	int n,i,x,item;
	cout<<"Enter number of element in linked list:";
	cin>>n;
	cout<<"Enter elements:";
	for(i=0;i<n;i++)
	{
		cin>>item;
		New=new Node();
		New->info=item;
		if(start==NULL)
		{
			start=New;
			t=New;
		}
		else
		{
			t->link=New;
			t=New;
		}
	}
	cout<<"Linked list is: ";
	display(start);
	cout<<"\nEnter position where you want to insert Node:";
	cin>>x;
	cout<<"Enter element";
	cin>>item;
	New=new Node;
	New->info=item;
	loc=findloc(x,start);
	if(loc==NULL)
	{
		New->link=start;
		start=New;
	}
	else
	{
		New->link=loc->link;
		loc->link=New;
	}
	cout<<"Updated Linked list:";
	display(start);
}
void display(Node *s)
{
	Node *p;
	p=s;
	while(p!=NULL)
	{
		cout<<p->info<<" ";
		p=p->link;
	}
}
Node* findloc(int x,Node *s)
{
	Node *ptr,*loc;
	ptr=s;
	if(x==1)
	  loc=NULL;
	else
	{
		for(int i=2;i<=x;i++)
		{
			loc=ptr;
			ptr=ptr->link;
		}
	}
	return loc;
}
