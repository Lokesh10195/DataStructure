#include<iostream>
using namespace std;
class Node{
	public:
	int info;
	Node *next;
	Node *prev;
};
void display(Node*);
Node* rotate(Node* ,int);
int main()
{
	Node *start=NULL,*ptr,*New,*t,*loc,*head;
	int n,i,x,item,p;
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
			start->prev=NULL;
			t=New;
		}
		else
		{
			t->next=New;
			New->prev=t;
			t=New;
		}
	}
	cout<<"Linked list is: ";
	display(start);
	cout<<"\nEnter how many times you want to rotate:";
	cin>>p;
	cout<<"Rotated linked list: ";
	head=rotate(start,p);
	display(head);
	
}
void display(Node *s)
{
	Node *p;
	p=s;
	while(p!=NULL)
	{
		cout<<p->info<<" ";
		p=p->next;
	}
	cout<<"\n";
}
Node* rotate(Node *start,int p)
{
	Node *ptr,*loc,*end,*head;
    int i=1;
    ptr=start;
    while(ptr!=NULL)
    {
        if(i==p)
        {
            loc=ptr;
        }
        end=ptr;
        ptr=ptr->next;
        i=i+1;
    }
    end->next=start;
    start->prev=end;
    head=loc->next;
    loc->next=NULL;
    head->prev=NULL;
    return head;
}
