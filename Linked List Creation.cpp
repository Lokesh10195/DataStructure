#include<iostream>                
using namespace std;
class Node{
	public:
	int info;
	Node *link;
};
void display(Node*);
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
