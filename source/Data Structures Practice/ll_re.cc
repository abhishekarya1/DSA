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
	insertathead(head, 3);
	print(head);

}