#include<iostream>

using namespace std;

class node{
public:
	int data;
	node *next;

	node(int d)
	{
		data = d;
		next = NULL;
	}
};

void insertAtHead(node* head, data)
{
	node*n = new node(data);
	n -> next = head;
	head = n;
}

int main()
{
	node *head = NULL;

	insertAtHead(5)
}