#include<iostream>

using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d)
	{
		data = d;
		next = NULL;
	}
};

void insertathead(node* &head, int d)
{
	node* nn = new node(d);
	nn->next= head;
	head = nn;
}

void insertatend(node* &head, int d)
{
	node* nn = new node(d);	
	node* cur = head;
	while(cur->next!=NULL)
	{
		cur = cur->next;
	}
	cur->next = nn;
	nn->next = NULL;
}

void print(node*head)
{	
	node* cur = head;
	while(cur){
		cout<<cur->data<<"-->";
		cur = cur->next;
	}
}

int main()
{
	node*head = NULL;
	insertathead(head, 1);
	insertathead(head, 2);
	insertatend(head, 7);
	insertatend(head, 8);
	print(head);

}