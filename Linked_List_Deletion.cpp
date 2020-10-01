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
	Node *start=NULL,*ptr,*New,*t,*loc,*del=NULL,*locd;
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
	
	cout<<"\nEnter element which you want to delete:";
	cin>>item;
	loc=findloc(item,start);
	if(loc==NULL)
	{
		del=start;
		start=start->link;
	}
	else
	{
		locd=loc->link;
		loc->link=locd->link;
		locd->link=NULL;
	}
	cout<<"Updated Linked list: ";
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
	Node *ptr,*loc,*locd;
	ptr=s;
	if(s->info==x)
	  loc=NULL;
	else
	{
		while(ptr!=NULL)
		{
			locd=ptr->link;
			if(locd->info==x)
			{
			  loc=ptr;
			  break;
		    }
			else
			  ptr=ptr->link;
		}
	}
	return loc;
}
