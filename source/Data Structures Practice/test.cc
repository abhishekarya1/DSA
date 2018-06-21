#include<iostream>

using namespace std;

class node {
public:
	int data;
	node* next;

	node(int d)
	{
		data = d;
		next = NULL;
	}
};


void deleteatend(node*head)
{	
	if(head == NULL) return;
	node*prev = NULL;
	node* cur = head;
	while (cur->next)
	{
		prev = cur;
		cur = cur ->next;
	}
	prev->next = NULL;
	delete cur;
}

void print(node*&head)
{
	node* cur = head;
	while (cur) {
		cout << cur->data << "-->";
		cur = cur->next;
	}
}

int main()
{
	node*head = NULL;
	deleteatend(head);
	print(head);

}