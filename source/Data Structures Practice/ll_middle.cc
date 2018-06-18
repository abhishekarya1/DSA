#include<iostream>

using namespace std;

class node{
public:
	int data;
	node*next;

	node(int d)
	{
		data =d ;
		next =NULL;
	}
};

void insertAtHead(node*&head, int data){
	node* n= new node(data);
	n->next=head;
	head = n;
}

int len{
	int len = 0;
	node*temp = head;
	while(temp!=NULL)
	{
		temp=temp->next;
		len+=1;
	}
}

void insertinMiddle(node*head, int data, int pos)
{
	if(head == NULL || pos == 0)
	{
		insertAtHead(head, data);
	}
	else if(pos >= len(head))
	{

	}
}


void print(node*head)
{
	node*temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"-->";
		temp = temp->next;
	}
	cout<<endl;
}

int main()
{
	node*head = NULL;
	insertAtHead(head, 5);
	insertAtHead(head, 6);
	insertAtHead(head, 7);
	print(head);
}